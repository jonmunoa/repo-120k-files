<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42467",
  props: { etiqueta: { type: String, default: "item-42467-v2" } }
};
</script>
