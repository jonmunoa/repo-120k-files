<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2011",
  props: { etiqueta: { type: String, default: "item-2011-v2" } }
};
</script>
