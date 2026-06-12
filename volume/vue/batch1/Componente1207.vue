<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1207",
  props: { etiqueta: { type: String, default: "item-1207-v2" } }
};
</script>
