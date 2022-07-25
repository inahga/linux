/* SPDX-License-Identifier: GPL-2.0+ */

#include <drm/drm_ioctl.h>
#include <drm/vkms_drm.h>

#include "vkms_drv.h"

int vkms_hotplug_ioctl(struct drm_device *dev, void *data,
		       struct drm_file *file_priv)
{
	// if active, destroy
	// if not active, create
	DRM_DEBUG("vkms_hotplug_ioctl()");
	return 0;
}
