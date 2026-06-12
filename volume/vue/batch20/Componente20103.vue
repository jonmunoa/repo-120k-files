<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20103",
  props: { etiqueta: { type: String, default: "item-20103-v2" } }
};
</script>
