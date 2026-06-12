<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42435",
  props: { etiqueta: { type: String, default: "item-42435-v2" } }
};
</script>
