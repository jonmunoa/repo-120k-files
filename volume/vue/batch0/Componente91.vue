<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item91",
  props: { etiqueta: { type: String, default: "item-91-v2" } }
};
</script>
