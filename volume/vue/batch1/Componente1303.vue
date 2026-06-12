<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1303",
  props: { etiqueta: { type: String, default: "item-1303-v2" } }
};
</script>
