<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42555",
  props: { etiqueta: { type: String, default: "item-42555-v2" } }
};
</script>
