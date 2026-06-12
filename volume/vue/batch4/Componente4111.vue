<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4111",
  props: { etiqueta: { type: String, default: "item-4111-v2" } }
};
</script>
