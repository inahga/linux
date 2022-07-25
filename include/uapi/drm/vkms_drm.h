/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */

#ifndef VIRTGPU_DRM_H
#define VIRTGPU_DRM_H

#if defined(__cplusplus)
extern "C" {
#endif

#define DRM_VKMS_HOTPLUG 0x01

#define DRM_IOCTL_VKMS_HOTPLUG DRM_IO(DRM_COMMAND_BASE + DRM_VKMS_HOTPLUG)

#if defined(__cplusplus)
}
#endif

#endif
