<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4231",
  props: { etiqueta: { type: String, default: "item-4231-v2" } }
};
</script>
