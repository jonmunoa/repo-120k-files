<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42231",
  props: { etiqueta: { type: String, default: "item-42231-v2" } }
};
</script>
