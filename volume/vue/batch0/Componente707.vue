<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item707",
  props: { etiqueta: { type: String, default: "item-707-v2" } }
};
</script>
