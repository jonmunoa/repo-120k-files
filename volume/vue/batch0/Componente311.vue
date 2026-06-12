<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item311",
  props: { etiqueta: { type: String, default: "item-311-v2" } }
};
</script>
