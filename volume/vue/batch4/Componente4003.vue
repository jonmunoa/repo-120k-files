<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4003",
  props: { etiqueta: { type: String, default: "item-4003-v2" } }
};
</script>
