<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item6123",
  props: { etiqueta: { type: String, default: "item-6123-v2" } }
};
</script>
