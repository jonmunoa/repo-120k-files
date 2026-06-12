<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item27783",
  props: { etiqueta: { type: String, default: "item-27783-v2" } }
};
</script>
