<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item19",
  props: { etiqueta: { type: String, default: "item-19-v2" } }
};
</script>
