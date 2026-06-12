<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42443",
  props: { etiqueta: { type: String, default: "item-42443-v2" } }
};
</script>
