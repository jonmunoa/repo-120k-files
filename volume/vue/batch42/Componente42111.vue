<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42111",
  props: { etiqueta: { type: String, default: "item-42111-v2" } }
};
</script>
