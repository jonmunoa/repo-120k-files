<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1991",
  props: { etiqueta: { type: String, default: "item-1991-v2" } }
};
</script>
