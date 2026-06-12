<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item67",
  props: { etiqueta: { type: String, default: "item-67-v2" } }
};
</script>
