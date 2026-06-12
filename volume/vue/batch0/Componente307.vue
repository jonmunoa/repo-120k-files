<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item307",
  props: { etiqueta: { type: String, default: "item-307-v2" } }
};
</script>
