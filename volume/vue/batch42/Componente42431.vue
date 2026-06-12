<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42431",
  props: { etiqueta: { type: String, default: "item-42431-v2" } }
};
</script>
