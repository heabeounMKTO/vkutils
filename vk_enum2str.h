#ifndef VULKAN_ENUM_TO_STRING_H
#define VULKAN_ENUM_TO_STRING_H
#include <stdio.h>
#include <string.h>
#include <vulkan/vulkan.h>

static inline const char* vkEnumToString_PhysicalDeviceType(VkPhysicalDeviceType type)
{
    switch (type)
    {
    case VK_PHYSICAL_DEVICE_TYPE_OTHER:
        return "Other";
    case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU:
        return "Integrated GPU";
    case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:
        return "Discrete GPU";
    case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:
        return "Virtual GPU";
    case VK_PHYSICAL_DEVICE_TYPE_CPU:
        return "CPU";
    default:
        return "Unknown VkPhysicalDeviceType";
    }
}

static inline const char* vkEnumToString_Result(VkResult result)
{
    switch (result)
    {
    case VK_SUCCESS:
        return "VK_SUCCESS";
    case VK_NOT_READY:
        return "VK_NOT_READY";
    case VK_TIMEOUT:
        return "VK_TIMEOUT";
    case VK_EVENT_SET:
        return "VK_EVENT_SET";
    case VK_EVENT_RESET:
        return "VK_EVENT_RESET";
    case VK_INCOMPLETE:
        return "VK_INCOMPLETE";
    case VK_ERROR_OUT_OF_HOST_MEMORY:
        return "VK_ERROR_OUT_OF_HOST_MEMORY";
    case VK_ERROR_OUT_OF_DEVICE_MEMORY:
        return "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    case VK_ERROR_INITIALIZATION_FAILED:
        return "VK_ERROR_INITIALIZATION_FAILED";
    case VK_ERROR_DEVICE_LOST:
        return "VK_ERROR_DEVICE_LOST";
    case VK_ERROR_MEMORY_MAP_FAILED:
        return "VK_ERROR_MEMORY_MAP_FAILED";
    case VK_ERROR_LAYER_NOT_PRESENT:
        return "VK_ERROR_LAYER_NOT_PRESENT";
    case VK_ERROR_EXTENSION_NOT_PRESENT:
        return "VK_ERROR_EXTENSION_NOT_PRESENT";
    case VK_ERROR_FEATURE_NOT_PRESENT:
        return "VK_ERROR_FEATURE_NOT_PRESENT";
    case VK_ERROR_INCOMPATIBLE_DRIVER:
        return "VK_ERROR_INCOMPATIBLE_DRIVER";
    case VK_ERROR_TOO_MANY_OBJECTS:
        return "VK_ERROR_TOO_MANY_OBJECTS";
    case VK_ERROR_FORMAT_NOT_SUPPORTED:
        return "VK_ERROR_FORMAT_NOT_SUPPORTED";
    case VK_ERROR_FRAGMENTED_POOL:
        return "VK_ERROR_FRAGMENTED_POOL";
    case VK_ERROR_SURFACE_LOST_KHR:
        return "VK_ERROR_SURFACE_LOST_KHR";
    case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR:
        return "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
    case VK_SUBOPTIMAL_KHR:
        return "VK_SUBOPTIMAL_KHR";
    case VK_ERROR_OUT_OF_DATE_KHR:
        return "VK_ERROR_OUT_OF_DATE_KHR";
    case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR:
        return "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
    case VK_ERROR_VALIDATION_FAILED_EXT:
        return "VK_ERROR_VALIDATION_FAILED_EXT";
    case VK_ERROR_INVALID_SHADER_NV:
        return "VK_ERROR_INVALID_SHADER_NV";
    default:
        return "Unknown VkResult";
    }
}

static inline const char* vkEnumToString_PresentModeKHR(VkPresentModeKHR mode)
{
    switch (mode)
    {
    case VK_PRESENT_MODE_IMMEDIATE_KHR:
        return "Immediate";  // Frame is sent to display immediately. May cause tearing.
    case VK_PRESENT_MODE_MAILBOX_KHR:
        return "Mailbox";  // V-Sync without blocking. Lower latency than FIFO.
    case VK_PRESENT_MODE_FIFO_KHR:
        return "FIFO";  // V-Sync (classic V-Blank sync). Guarantees no tearing.
    case VK_PRESENT_MODE_FIFO_RELAXED_KHR:
        return "FIFO Relaxed";  // Like FIFO, but allows tearing if late.
    default:
        return "Unknown VkPresentModeKHR";
    }
}

static inline const char* vkEnumToString_Format(VkFormat format)
{
    switch (format)
    {
    case VK_FORMAT_UNDEFINED:
        return "UNDEFINED";
    case VK_FORMAT_R4G4_UNORM_PACK8:
        return "R4G4_UNORM_PACK8";
    case VK_FORMAT_R8G8B8A8_UNORM:
        return "R8G8B8A8_UNORM (Common)";
    case VK_FORMAT_B8G8R8A8_UNORM:
        return "B8G8R8A8_UNORM (Common)";
    case VK_FORMAT_R8_UNORM:
        return "R8_UNORM";
    case VK_FORMAT_R32G32B32_SFLOAT:
        return "R32G32B32_SFLOAT";
    case VK_FORMAT_R32G32B32A32_SFLOAT:
        return "R32G32B32A32_SFLOAT";
    case VK_FORMAT_D16_UNORM:
        return "D16_UNORM (Depth)";
    case VK_FORMAT_X8_D24_UNORM_PACK32:
        return "X8_D24_UNORM_PACK32 (Depth)";
    case VK_FORMAT_D32_SFLOAT:
        return "D32_SFLOAT (Depth)";
    case VK_FORMAT_D32_SFLOAT_S8_UINT:
        return "D32_SFLOAT_S8_UINT (Depth/Stencil)";
    case VK_FORMAT_D24_UNORM_S8_UINT:
        return "D24_UNORM_S8_UINT (Depth/Stencil)";
    default:
        return "Other/Unknown VkFormat";
    }
}

static inline const char* vkEnumToString_ColorSpaceKHR(VkColorSpaceKHR colorSpace)
{
    switch (colorSpace)
    {
    case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR:
        return "SRGB_NONLINEAR (Common)";  // Standard display color space
    case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT:
        return "DISPLAY_P3_NONLINEAR";
    case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT:
        return "EXTENDED_SRGB_LINEAR";
    case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT:
        return "ADOBERGB_NONLINEAR";
    default:
        return "Other/Unknown VkColorSpaceKHR";
    }
}

static inline const char* vkEnumToString_ImageLayout(VkImageLayout layout)
{
    switch (layout)
    {
    case VK_IMAGE_LAYOUT_UNDEFINED:
        return "UNDEFINED";  // Initial layout, content is undefined.
    case VK_IMAGE_LAYOUT_GENERAL:
        return "GENERAL";  // Arbitrary uses. Needed for shared/concurrent access.
    case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
        return "COLOR_ATTACHMENT_OPTIMAL";  // Optimal for color attachment use.
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
        return "DEPTH_STENCIL_ATTACHMENT_OPTIMAL";  // Optimal for depth/stencil write.
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
        return "DEPTH_STENCIL_READ_ONLY_OPTIMAL";  // Optimal for depth/stencil read.
    case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
        return "SHADER_READ_ONLY_OPTIMAL";  // Optimal for sampling/input attachments.
    case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
        return "TRANSFER_SRC_OPTIMAL";  // Optimal as a transfer source (copy command).
    case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
        return "TRANSFER_DST_OPTIMAL";  // Optimal as a transfer destination (copy command).
    case VK_IMAGE_LAYOUT_PREINITIALIZED:
        return "PREINITIALIZED";  // Initial layout, content *may* be preserved.
    case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
        return "PRESENT_SRC_KHR";  // Optimal for presentation (displaying to screen).
    default:
        return "Other/Unknown VkImageLayout";
    }
}

static inline const char* vkEnumToString_PipelineBindPoint(VkPipelineBindPoint bindPoint)
{
    switch (bindPoint)
    {
    case VK_PIPELINE_BIND_POINT_GRAPHICS:
        return "GRAPHICS";  // For rendering operations.
    case VK_PIPELINE_BIND_POINT_COMPUTE:
        return "COMPUTE";  // For compute shader operations.
    default:
        return "Other/Unknown VkPipelineBindPoint";
    }
}
static inline const char* vkEnumToString_QueueFlagBits(VkQueueFlagBits flags)
{
    switch (flags)
    {
    case VK_QUEUE_GRAPHICS_BIT:
        return "GRAPHICS";
    case VK_QUEUE_COMPUTE_BIT:
        return "COMPUTE";
    case VK_QUEUE_TRANSFER_BIT:
        return "TRANSFER";
    case VK_QUEUE_SPARSE_BINDING_BIT:
        return "SPARSE_BINDING";
    case VK_QUEUE_PROTECTED_BIT:
        return "PROTECTED";
    case VK_QUEUE_VIDEO_DECODE_BIT_KHR:
        return "VIDEO_DECODE";
    case VK_QUEUE_VIDEO_ENCODE_BIT_KHR:
        return "VIDEO_ENCODE";
    default:
        return "Unknown_Queue_Bit";
    }
}

static inline const char* vkQueueFlagsToString(VkQueueFlags flags)
{
    // Note: static buffer to hold the result, thread safety is assumed to be handled externally
    // or through careful usage (like using it immediately).
    static char buffer[128];
    buffer[0] = '\0';  // Clear the buffer

    if (flags & VK_QUEUE_GRAPHICS_BIT)
    {
        strcat(buffer, "GRAPHICS, ");
        flags &= ~VK_QUEUE_GRAPHICS_BIT;
    }
    if (flags & VK_QUEUE_COMPUTE_BIT)
    {
        strcat(buffer, "COMPUTE, ");
        flags &= ~VK_QUEUE_COMPUTE_BIT;
    }
    if (flags & VK_QUEUE_TRANSFER_BIT)
    {
        strcat(buffer, "TRANSFER, ");
        flags &= ~VK_QUEUE_TRANSFER_BIT;
    }

    if (flags & VK_QUEUE_SPARSE_BINDING_BIT)
    {
        strcat(buffer, "SPARSE_BINDING, ");
        flags &= ~VK_QUEUE_SPARSE_BINDING_BIT;
    }
    if (flags & VK_QUEUE_PROTECTED_BIT)
    {
        strcat(buffer, "PROTECTED, ");
        flags &= ~VK_QUEUE_PROTECTED_BIT;
    }

    if (flags & VK_QUEUE_VIDEO_DECODE_BIT_KHR)
    {
        strcat(buffer, "VIDEO_DECODE, ");
        flags &= ~VK_QUEUE_VIDEO_DECODE_BIT_KHR;
    }
    if (flags & VK_QUEUE_VIDEO_ENCODE_BIT_KHR)
    {
        strcat(buffer, "VIDEO_ENCODE, ");
        flags &= ~VK_QUEUE_VIDEO_ENCODE_BIT_KHR;
    }

    size_t len = strlen(buffer);
    if (len > 2)
    {
        buffer[len - 2] = '\0';
    }
    else if (len == 0)
    {
        // Handle case where flags was 0 or contained unknown bits
        strcat(buffer, "None/Unknown");
    }

    return buffer;
}

// --- VkMemoryPropertyFlagBits to String (for individual bits) ---
static inline const char* vkEnumToString_MemoryPropertyFlagBits(VkMemoryPropertyFlagBits bit)
{
    switch (bit)
    {
    case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT:
        return "DEVICE_LOCAL";  // Best performance, usually VRAM.
    case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT:
        return "HOST_VISIBLE";  // Mappable by CPU.
    case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT:
        return "HOST_COHERENT";  // Automatic cache sync (slower read/write).
    case VK_MEMORY_PROPERTY_HOST_CACHED_BIT:
        return "HOST_CACHED";  // Host reads are fast.
    case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT:
        return "LAZILY_ALLOCATED";  // For transient attachment memory (render passes).
    case VK_MEMORY_PROPERTY_PROTECTED_BIT:
        return "PROTECTED";  // Used for DRM/Secure content.
    case VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD:
        return "DEVICE_COHERENT_AMD";  // Device cache control (AMD extension).
    case VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD:
        return "DEVICE_UNCACHED_AMD";  // No device cache (AMD extension).
    default:
        return "Unknown_Memory_Bit";
    }
}

// --- VkMemoryPropertyFlags to String (for bitmask) ---
static inline const char* vkMemoryPropertiesToString(VkMemoryPropertyFlags flags)
{
    static char buffer[256];
    buffer[0] = '\0';

    // Check for common flags
    if (flags & VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)
    {
        strcat(buffer, "DEVICE_LOCAL, ");
    }
    if (flags & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)
    {
        strcat(buffer, "HOST_VISIBLE, ");
    }
    if (flags & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)
    {
        strcat(buffer, "HOST_COHERENT, ");
    }
    if (flags & VK_MEMORY_PROPERTY_HOST_CACHED_BIT)
    {
        strcat(buffer, "HOST_CACHED, ");
    }
    if (flags & VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT)
    {
        strcat(buffer, "LAZILY_ALLOCATED, ");
    }
    if (flags & VK_MEMORY_PROPERTY_PROTECTED_BIT)
    {
        strcat(buffer, "PROTECTED, ");
    }

    // Check for less common/extension flags (optional, but good for completeness)
    if (flags & VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD)
    {
        strcat(buffer, "DEVICE_COHERENT_AMD, ");
    }
    if (flags & VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD)
    {
        strcat(buffer, "DEVICE_UNCACHED_AMD, ");
    }

    // Remove trailing comma and space
    size_t len = strlen(buffer);
    if (len > 2)
    {
        buffer[len - 2] = '\0';
    }
    else if (len == 0)
    {
        strcat(buffer, "None/Unknown");
    }

    return buffer;
}

static inline const char* vkPhysicalDeviceFeaturesToString(VkPhysicalDeviceFeatures features)
{
    // Increased buffer size since we might list many features
    static char buffer[1024];
    buffer[0] = '\0';

    int count = 0;

#define CHECK_FEATURE(f)                                                                           \
    if (features.f)                                                                                \
    {                                                                                              \
        if (count > 0)                                                                             \
            strcat(buffer, ", ");                                                                  \
        strcat(buffer, #f);                                                                        \
        count++;                                                                                   \
    }

    // List of common/important features
    CHECK_FEATURE(robustBufferAccess);
    CHECK_FEATURE(fullDrawIndexUint32);
    CHECK_FEATURE(imageCubeArray);
    CHECK_FEATURE(independentBlend);
    CHECK_FEATURE(geometryShader);
    CHECK_FEATURE(tessellationShader);
    CHECK_FEATURE(sampleRateShading);
    CHECK_FEATURE(dualSrcBlend);
    CHECK_FEATURE(logicOp);
    CHECK_FEATURE(multiDrawIndirect);
    CHECK_FEATURE(drawIndirectFirstInstance);
    CHECK_FEATURE(depthClamp);
    CHECK_FEATURE(depthBiasClamp);
    CHECK_FEATURE(fillModeNonSolid);
    CHECK_FEATURE(depthBounds);
    CHECK_FEATURE(wideLines);
    CHECK_FEATURE(largePoints);
    CHECK_FEATURE(alphaToOne);
    CHECK_FEATURE(multiViewport);
    CHECK_FEATURE(samplerAnisotropy);
    CHECK_FEATURE(textureCompressionETC2);
    CHECK_FEATURE(textureCompressionASTC_LDR);
    CHECK_FEATURE(textureCompressionBC);
    CHECK_FEATURE(occlusionQueryPrecise);
    CHECK_FEATURE(pipelineStatisticsQuery);
    CHECK_FEATURE(vertexPipelineStoresAndAtomics);
    CHECK_FEATURE(fragmentStoresAndAtomics);
    CHECK_FEATURE(shaderTessellationAndGeometryPointSize);
    CHECK_FEATURE(shaderImageGatherExtended);
    CHECK_FEATURE(shaderStorageImageExtendedFormats);
    CHECK_FEATURE(shaderStorageImageReadWithoutFormat);
    CHECK_FEATURE(shaderStorageImageWriteWithoutFormat);
    CHECK_FEATURE(shaderUniformBufferArrayDynamicIndexing);
    CHECK_FEATURE(shaderSampledImageArrayDynamicIndexing);
    CHECK_FEATURE(shaderStorageBufferArrayDynamicIndexing);
    CHECK_FEATURE(shaderStorageImageArrayDynamicIndexing);
    CHECK_FEATURE(shaderClipDistance);
    CHECK_FEATURE(shaderCullDistance);
    CHECK_FEATURE(shaderFloat64);
    CHECK_FEATURE(shaderInt64);
    CHECK_FEATURE(shaderInt16);
    CHECK_FEATURE(variableMultisampleRate);
    CHECK_FEATURE(inheritedQueries);

#undef CHECK_FEATURE

    if (count == 0)
    {
        // This should rarely happen for any functional device
        strcat(buffer, "None Enabled/Base Features Only");
    }

    // The final result is a comma-separated list of enabled feature names.
    return buffer;
}
static inline const char* vkDeviceToString(VkDevice device)
{
    static char buffer[128];

    // Log the opaque handle value itself for debugging/tracking.
    // Casting to void* is standard for printing opaque handles.
    snprintf(buffer, sizeof(buffer), "VkDevice Handle: 0x%p", (void*)device);

    return buffer;
}
static inline const char* vkPhysicalDeviceToString(VkPhysicalDevice device)
{
    static char buffer[512];

    VkPhysicalDeviceProperties props;
    vkGetPhysicalDeviceProperties(device, &props);

    snprintf(buffer, sizeof(buffer),
             "Name: %s | Type: %s | API: %u.%u.%u | Driver: %u | VendorID: 0x%04X | DeviceID: "
             "0x%04X",
             props.deviceName, vkEnumToString_PhysicalDeviceType(props.deviceType),
             VK_API_VERSION_MAJOR(props.apiVersion), VK_API_VERSION_MINOR(props.apiVersion),
             VK_API_VERSION_PATCH(props.apiVersion), props.driverVersion, props.vendorID,
             props.deviceID);

    return buffer;
}

#endif  // VULKAN_ENUM_TO_STRING_H

