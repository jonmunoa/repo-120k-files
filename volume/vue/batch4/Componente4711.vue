<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4711",
  props: { etiqueta: { type: String, default: "item-4711-v2" } }
};
</script>
