# Add the ability to specify _imx machines (temporarily here)
MACHINEOVERRIDES =. "imx:"

# Preferred Providers
PREFERRED_PROVIDER_virtual/libgal-x11 = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/libopenvg = "imx-gpu-viv"
PREFERRED_PROVIDER_virtual/mesa = ""
PREFERRED_PROVIDER_jpeg = "libjpeg-turbo"

PREFERRED_PROVIDER_wpa-supplicant = "wpa-supplicant"

# Preferred Versions

PREFERRED_VERSION_compat-wireless-all = "git"

PREFERRED_VERSION_wpa-supplicant = "2.3"

# set these because of meta-fsl-arm override to new xorg version
PREFERRED_VERSION_xserver-xorg = "2:1.17.2"

PREFERRED_VERSION_xtrans = "1.3.5"

# preferred versions of recipes-graphics
FP_TAG = "${@base_contains("TUNE_FEATURES", "callconvention-hard", "-hfp", "-sfp", d)}"

PREFERRED_VERSION_imx-gpu-viv = "5.0.11.p7.1${FP_TAG}"
PREFERRED_VERSION_xf86-video-imxfb-vivante = "5.0.11.p7.1"
PREFERRED_VERSION_kernel-module-imx-gpu-viv = "5.0.11.p7.1"

PREFERRED_VERSION_fsl-gpu-sdk = "2.2"

# OpenCV Preferred version
PREFERRED_VERSION_opencv="3.1"

# Use Wayland new version
BBMASK = "meta-fsl-arm/recipes-graphics/wayland/weston_%.bbappend"
BBMASK .= "|meta-fsl-arm/recipes-graphics/mesa/mesa_%.bbappend"

# Remove the GST patch on the community
BBMASK .= "|meta-fsl-arm/recipes-multimedia/gstreamer/gstreamer1.0-plugins-base_%.bbappend"
BBMASK .= "|poky/meta/recipes-multimedia/gstreamer/gstreamer1.0-plugins-bad_1.4.5.bb"
BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-multimedia/gstreamer/gstreamer1.0-plugins-bad_%.bbappend"
BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-multimedia/gstreamer/gstreamer1.0-plugins-base_%.bbappend"
BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-multimedia/gstreamer/gstreamer1.0-plugins-good_%.bbappend"
BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-multimedia/gstreamer/gstreamer1.0_%.bbappend"
BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-multimedia/gstreamer/gst1.0-fsl-plugin_4.0.7.bb"
# BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-graphics/imx-gpu-viv/imx-gpu-viv_5.0.11.p7.1-hfp.bb"
# BBMASK .= "|meta-fsl-bsp-release/imx/meta-bsp/recipes-graphics/imx-gpu-viv/imx-gpu-viv_5.0.11.p7.1-sfp.bb"
# BBMASK .= "|meta-fsl-arm/recipes-graphics/imx-gpu-viv/imx-gpu-viv_5.0.11.p4.5-hfp.bb"
# BBMASK .= "|meta-fsl-arm/recipes-graphics/imx-gpu-viv/imx-gpu-viv_5.0.11.p4.5-sfp.bb"

# Preferred versions of recipes-bsp
PREFERRED_VERSION_imx-vpu = "5.4.31"
PREFERRED_VERSION_imx-lib = "5.1"
PREFERRED_VERSION_imx-test = "5.2"
PREFERRED_VERSION_imx-uuc = "0.5"
PREFERRED_VERSION_imx-kobs = "5.1"
PREFERRED_VERSION_firmware-imx = "5.2"

# preferred versions of recipes-kernel
PREFERRED_VERSION_linux-libc-headers = "3.14"

# preferred versions of recipes-multimedia
PREFERRED_VERSION_gst-fsl-plugin = "4.0.7"
PREFERRED_VERSION_libfslcodec = "4.0.7"
PREFERRED_VERSION_libfslparser = "4.0.7"
PREFERRED_VERSION_libfslvpuwrap = "1.0.61"
PREFERRED_VERSION_gst1.0-fsl-plugin = "4.0.7"
PREFERRED_VERSION_fsl-alsa-plugins = "1.0.25"
PREFERRED_VERSION_gst-plugins-gl = "0.10.3"
PREFERRED_VERSION_fslqtapplications = "1.0.5"

# preferred versions of gstreamer1.0
PREFERRED_VERSION_gstreamer1.0 = "1.12.4"
PREFERRED_VERSION_gstreamer1.0-plugins-base = "1.12.4"
PREFERRED_VERSION_gstreamer1.0-plugins-good = "1.12.4"
PREFERRED_VERSION_gstreamer1.0-plugins-bad = "1.12.4"
PREFERRED_VERSION_gstreamer1.0-plugins-imx = "0.13.0"

# GStreamer
MACHINE_GSTREAMER_1_0_PLUGIN_mx6q = "gst1.0-fsl-plugin"
MACHINE_GSTREAMER_1_0_PLUGIN_mx6dl = "gst1.0-fsl-plugin"
PACKAGECONFIG_append_pn-gstreamer1.0 = "check"

DEFAULTTUNE ?= "cortexa9hf-vfp-neon"

# Add the ability to specify _imx machines
MACHINEOVERRIDES =. "imx:"
