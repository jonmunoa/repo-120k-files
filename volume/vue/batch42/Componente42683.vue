<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42683",
  props: { etiqueta: { type: String, default: "item-42683-v2" } }
};
</script>
