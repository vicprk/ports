/*
 * Generated by gdbus-codegen 2.60.6 from org.freedesktop.UPower.Device.xml. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __UP_DEVICE_GENERATED_H__
#define __UP_DEVICE_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.UPower.Device */

#define UP_TYPE_EXPORTED_DEVICE (up_exported_device_get_type ())
#define UP_EXPORTED_DEVICE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), UP_TYPE_EXPORTED_DEVICE, UpExportedDevice))
#define UP_IS_EXPORTED_DEVICE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UP_TYPE_EXPORTED_DEVICE))
#define UP_EXPORTED_DEVICE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), UP_TYPE_EXPORTED_DEVICE, UpExportedDeviceIface))

struct _UpExportedDevice;
typedef struct _UpExportedDevice UpExportedDevice;
typedef struct _UpExportedDeviceIface UpExportedDeviceIface;

struct _UpExportedDeviceIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_get_history) (
    UpExportedDevice *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_type,
    guint arg_timespan,
    guint arg_resolution);

  gboolean (*handle_get_statistics) (
    UpExportedDevice *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_type);

  gboolean (*handle_refresh) (
    UpExportedDevice *object,
    GDBusMethodInvocation *invocation);

  guint  (*get_battery_level) (UpExportedDevice *object);

  gdouble  (*get_capacity) (UpExportedDevice *object);

  gdouble  (*get_energy) (UpExportedDevice *object);

  gdouble  (*get_energy_empty) (UpExportedDevice *object);

  gdouble  (*get_energy_full) (UpExportedDevice *object);

  gdouble  (*get_energy_full_design) (UpExportedDevice *object);

  gdouble  (*get_energy_rate) (UpExportedDevice *object);

  gboolean  (*get_has_history) (UpExportedDevice *object);

  gboolean  (*get_has_statistics) (UpExportedDevice *object);

  const gchar * (*get_icon_name) (UpExportedDevice *object);

  gboolean  (*get_is_present) (UpExportedDevice *object);

  gboolean  (*get_is_rechargeable) (UpExportedDevice *object);

  gdouble  (*get_luminosity) (UpExportedDevice *object);

  const gchar * (*get_model) (UpExportedDevice *object);

  const gchar * (*get_native_path) (UpExportedDevice *object);

  gboolean  (*get_online) (UpExportedDevice *object);

  gdouble  (*get_percentage) (UpExportedDevice *object);

  gboolean  (*get_power_supply) (UpExportedDevice *object);

  const gchar * (*get_serial) (UpExportedDevice *object);

  guint  (*get_state) (UpExportedDevice *object);

  guint  (*get_technology) (UpExportedDevice *object);

  gdouble  (*get_temperature) (UpExportedDevice *object);

  gint64  (*get_time_to_empty) (UpExportedDevice *object);

  gint64  (*get_time_to_full) (UpExportedDevice *object);

  guint  (*get_type_) (UpExportedDevice *object);

  guint64  (*get_update_time) (UpExportedDevice *object);

  const gchar * (*get_vendor) (UpExportedDevice *object);

  gdouble  (*get_voltage) (UpExportedDevice *object);

  guint  (*get_warning_level) (UpExportedDevice *object);

};

GType up_exported_device_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *up_exported_device_interface_info (void);
guint up_exported_device_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void up_exported_device_complete_refresh (
    UpExportedDevice *object,
    GDBusMethodInvocation *invocation);

void up_exported_device_complete_get_history (
    UpExportedDevice *object,
    GDBusMethodInvocation *invocation,
    GVariant *data);

void up_exported_device_complete_get_statistics (
    UpExportedDevice *object,
    GDBusMethodInvocation *invocation,
    GVariant *data);



/* D-Bus method calls: */
void up_exported_device_call_refresh (
    UpExportedDevice *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean up_exported_device_call_refresh_finish (
    UpExportedDevice *proxy,
    GAsyncResult *res,
    GError **error);

gboolean up_exported_device_call_refresh_sync (
    UpExportedDevice *proxy,
    GCancellable *cancellable,
    GError **error);

void up_exported_device_call_get_history (
    UpExportedDevice *proxy,
    const gchar *arg_type,
    guint arg_timespan,
    guint arg_resolution,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean up_exported_device_call_get_history_finish (
    UpExportedDevice *proxy,
    GVariant **out_data,
    GAsyncResult *res,
    GError **error);

gboolean up_exported_device_call_get_history_sync (
    UpExportedDevice *proxy,
    const gchar *arg_type,
    guint arg_timespan,
    guint arg_resolution,
    GVariant **out_data,
    GCancellable *cancellable,
    GError **error);

void up_exported_device_call_get_statistics (
    UpExportedDevice *proxy,
    const gchar *arg_type,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean up_exported_device_call_get_statistics_finish (
    UpExportedDevice *proxy,
    GVariant **out_data,
    GAsyncResult *res,
    GError **error);

gboolean up_exported_device_call_get_statistics_sync (
    UpExportedDevice *proxy,
    const gchar *arg_type,
    GVariant **out_data,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *up_exported_device_get_native_path (UpExportedDevice *object);
gchar *up_exported_device_dup_native_path (UpExportedDevice *object);
void up_exported_device_set_native_path (UpExportedDevice *object, const gchar *value);

const gchar *up_exported_device_get_vendor (UpExportedDevice *object);
gchar *up_exported_device_dup_vendor (UpExportedDevice *object);
void up_exported_device_set_vendor (UpExportedDevice *object, const gchar *value);

const gchar *up_exported_device_get_model (UpExportedDevice *object);
gchar *up_exported_device_dup_model (UpExportedDevice *object);
void up_exported_device_set_model (UpExportedDevice *object, const gchar *value);

const gchar *up_exported_device_get_serial (UpExportedDevice *object);
gchar *up_exported_device_dup_serial (UpExportedDevice *object);
void up_exported_device_set_serial (UpExportedDevice *object, const gchar *value);

guint64 up_exported_device_get_update_time (UpExportedDevice *object);
void up_exported_device_set_update_time (UpExportedDevice *object, guint64 value);

guint up_exported_device_get_type_ (UpExportedDevice *object);
void up_exported_device_set_type_ (UpExportedDevice *object, guint value);

gboolean up_exported_device_get_power_supply (UpExportedDevice *object);
void up_exported_device_set_power_supply (UpExportedDevice *object, gboolean value);

gboolean up_exported_device_get_has_history (UpExportedDevice *object);
void up_exported_device_set_has_history (UpExportedDevice *object, gboolean value);

gboolean up_exported_device_get_has_statistics (UpExportedDevice *object);
void up_exported_device_set_has_statistics (UpExportedDevice *object, gboolean value);

gboolean up_exported_device_get_online (UpExportedDevice *object);
void up_exported_device_set_online (UpExportedDevice *object, gboolean value);

gdouble up_exported_device_get_energy (UpExportedDevice *object);
void up_exported_device_set_energy (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_energy_empty (UpExportedDevice *object);
void up_exported_device_set_energy_empty (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_energy_full (UpExportedDevice *object);
void up_exported_device_set_energy_full (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_energy_full_design (UpExportedDevice *object);
void up_exported_device_set_energy_full_design (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_energy_rate (UpExportedDevice *object);
void up_exported_device_set_energy_rate (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_voltage (UpExportedDevice *object);
void up_exported_device_set_voltage (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_luminosity (UpExportedDevice *object);
void up_exported_device_set_luminosity (UpExportedDevice *object, gdouble value);

gint64 up_exported_device_get_time_to_empty (UpExportedDevice *object);
void up_exported_device_set_time_to_empty (UpExportedDevice *object, gint64 value);

gint64 up_exported_device_get_time_to_full (UpExportedDevice *object);
void up_exported_device_set_time_to_full (UpExportedDevice *object, gint64 value);

gdouble up_exported_device_get_percentage (UpExportedDevice *object);
void up_exported_device_set_percentage (UpExportedDevice *object, gdouble value);

gdouble up_exported_device_get_temperature (UpExportedDevice *object);
void up_exported_device_set_temperature (UpExportedDevice *object, gdouble value);

gboolean up_exported_device_get_is_present (UpExportedDevice *object);
void up_exported_device_set_is_present (UpExportedDevice *object, gboolean value);

guint up_exported_device_get_state (UpExportedDevice *object);
void up_exported_device_set_state (UpExportedDevice *object, guint value);

gboolean up_exported_device_get_is_rechargeable (UpExportedDevice *object);
void up_exported_device_set_is_rechargeable (UpExportedDevice *object, gboolean value);

gdouble up_exported_device_get_capacity (UpExportedDevice *object);
void up_exported_device_set_capacity (UpExportedDevice *object, gdouble value);

guint up_exported_device_get_technology (UpExportedDevice *object);
void up_exported_device_set_technology (UpExportedDevice *object, guint value);

guint up_exported_device_get_warning_level (UpExportedDevice *object);
void up_exported_device_set_warning_level (UpExportedDevice *object, guint value);

guint up_exported_device_get_battery_level (UpExportedDevice *object);
void up_exported_device_set_battery_level (UpExportedDevice *object, guint value);

const gchar *up_exported_device_get_icon_name (UpExportedDevice *object);
gchar *up_exported_device_dup_icon_name (UpExportedDevice *object);
void up_exported_device_set_icon_name (UpExportedDevice *object, const gchar *value);


/* ---- */

#define UP_TYPE_EXPORTED_DEVICE_PROXY (up_exported_device_proxy_get_type ())
#define UP_EXPORTED_DEVICE_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), UP_TYPE_EXPORTED_DEVICE_PROXY, UpExportedDeviceProxy))
#define UP_EXPORTED_DEVICE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), UP_TYPE_EXPORTED_DEVICE_PROXY, UpExportedDeviceProxyClass))
#define UP_EXPORTED_DEVICE_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), UP_TYPE_EXPORTED_DEVICE_PROXY, UpExportedDeviceProxyClass))
#define UP_IS_EXPORTED_DEVICE_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UP_TYPE_EXPORTED_DEVICE_PROXY))
#define UP_IS_EXPORTED_DEVICE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), UP_TYPE_EXPORTED_DEVICE_PROXY))

typedef struct _UpExportedDeviceProxy UpExportedDeviceProxy;
typedef struct _UpExportedDeviceProxyClass UpExportedDeviceProxyClass;
typedef struct _UpExportedDeviceProxyPrivate UpExportedDeviceProxyPrivate;

struct _UpExportedDeviceProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  UpExportedDeviceProxyPrivate *priv;
};

struct _UpExportedDeviceProxyClass
{
  GDBusProxyClass parent_class;
};

GType up_exported_device_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (UpExportedDeviceProxy, g_object_unref)
#endif

void up_exported_device_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
UpExportedDevice *up_exported_device_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
UpExportedDevice *up_exported_device_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void up_exported_device_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
UpExportedDevice *up_exported_device_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
UpExportedDevice *up_exported_device_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define UP_TYPE_EXPORTED_DEVICE_SKELETON (up_exported_device_skeleton_get_type ())
#define UP_EXPORTED_DEVICE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), UP_TYPE_EXPORTED_DEVICE_SKELETON, UpExportedDeviceSkeleton))
#define UP_EXPORTED_DEVICE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), UP_TYPE_EXPORTED_DEVICE_SKELETON, UpExportedDeviceSkeletonClass))
#define UP_EXPORTED_DEVICE_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), UP_TYPE_EXPORTED_DEVICE_SKELETON, UpExportedDeviceSkeletonClass))
#define UP_IS_EXPORTED_DEVICE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UP_TYPE_EXPORTED_DEVICE_SKELETON))
#define UP_IS_EXPORTED_DEVICE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), UP_TYPE_EXPORTED_DEVICE_SKELETON))

typedef struct _UpExportedDeviceSkeleton UpExportedDeviceSkeleton;
typedef struct _UpExportedDeviceSkeletonClass UpExportedDeviceSkeletonClass;
typedef struct _UpExportedDeviceSkeletonPrivate UpExportedDeviceSkeletonPrivate;

struct _UpExportedDeviceSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  UpExportedDeviceSkeletonPrivate *priv;
};

struct _UpExportedDeviceSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType up_exported_device_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (UpExportedDeviceSkeleton, g_object_unref)
#endif

UpExportedDevice *up_exported_device_skeleton_new (void);


G_END_DECLS

#endif /* __UP_DEVICE_GENERATED_H__ */
