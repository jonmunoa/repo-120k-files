<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42543",
  props: { etiqueta: { type: String, default: "item-42543-v2" } }
};
</script>
