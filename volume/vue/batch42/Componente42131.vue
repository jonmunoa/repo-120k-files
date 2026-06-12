<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42131",
  props: { etiqueta: { type: String, default: "item-42131-v2" } }
};
</script>
