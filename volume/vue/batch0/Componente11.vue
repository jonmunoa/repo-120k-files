<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item11",
  props: { etiqueta: { type: String, default: "item-11-v2" } }
};
</script>
