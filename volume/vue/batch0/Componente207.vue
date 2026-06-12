<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item207",
  props: { etiqueta: { type: String, default: "item-207-v2" } }
};
</script>
