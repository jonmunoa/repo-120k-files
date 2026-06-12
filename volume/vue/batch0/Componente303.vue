<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item303",
  props: { etiqueta: { type: String, default: "item-303-v2" } }
};
</script>
