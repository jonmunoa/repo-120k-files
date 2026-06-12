<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2303",
  props: { etiqueta: { type: String, default: "item-2303-v2" } }
};
</script>
