<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2103",
  props: { etiqueta: { type: String, default: "item-2103-v2" } }
};
</script>
