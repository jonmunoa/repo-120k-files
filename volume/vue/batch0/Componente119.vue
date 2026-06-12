<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item119",
  props: { etiqueta: { type: String, default: "item-119-v2" } }
};
</script>
