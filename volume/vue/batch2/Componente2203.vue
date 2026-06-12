<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2203",
  props: { etiqueta: { type: String, default: "item-2203-v2" } }
};
</script>
