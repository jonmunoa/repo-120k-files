<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2019",
  props: { etiqueta: { type: String, default: "item-2019-v2" } }
};
</script>
