<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item19999",
  props: { etiqueta: { type: String, default: "item-19999-v2" } }
};
</script>
