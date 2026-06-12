<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item103",
  props: { etiqueta: { type: String, default: "item-103-v2" } }
};
</script>
