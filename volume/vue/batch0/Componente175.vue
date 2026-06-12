<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item175",
  props: { etiqueta: { type: String, default: "item-175-v2" } }
};
</script>
