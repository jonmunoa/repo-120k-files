<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4567",
  props: { etiqueta: { type: String, default: "item-4567-v2" } }
};
</script>
