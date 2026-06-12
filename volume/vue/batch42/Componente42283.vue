<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42283",
  props: { etiqueta: { type: String, default: "item-42283-v2" } }
};
</script>
