<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item127",
  props: { etiqueta: { type: String, default: "item-127-v2" } }
};
</script>
