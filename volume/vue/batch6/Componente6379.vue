<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item6379",
  props: { etiqueta: { type: String, default: "item-6379-v2" } }
};
</script>
