<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item523",
  props: { etiqueta: { type: String, default: "item-523-v2" } }
};
</script>
