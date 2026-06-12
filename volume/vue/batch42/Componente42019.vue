<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42019",
  props: { etiqueta: { type: String, default: "item-42019-v2" } }
};
</script>
