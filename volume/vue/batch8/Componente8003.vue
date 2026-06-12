<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item8003",
  props: { etiqueta: { type: String, default: "item-8003-v2" } }
};
</script>
