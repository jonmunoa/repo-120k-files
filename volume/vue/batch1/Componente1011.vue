<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1011",
  props: { etiqueta: { type: String, default: "item-1011-v2" } }
};
</script>
