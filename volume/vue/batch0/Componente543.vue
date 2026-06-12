<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item543",
  props: { etiqueta: { type: String, default: "item-543-v2" } }
};
</script>
