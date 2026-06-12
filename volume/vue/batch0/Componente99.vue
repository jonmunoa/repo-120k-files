<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item99",
  props: { etiqueta: { type: String, default: "item-99-v2" } }
};
</script>
