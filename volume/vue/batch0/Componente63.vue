<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item63",
  props: { etiqueta: { type: String, default: "item-63-v2" } }
};
</script>
