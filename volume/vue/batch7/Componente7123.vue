<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item7123",
  props: { etiqueta: { type: String, default: "item-7123-v2" } }
};
</script>
