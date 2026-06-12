<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item999",
  props: { etiqueta: { type: String, default: "item-999-v2" } }
};
</script>
