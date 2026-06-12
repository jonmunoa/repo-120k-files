<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2015",
  props: { etiqueta: { type: String, default: "item-2015-v2" } }
};
</script>
