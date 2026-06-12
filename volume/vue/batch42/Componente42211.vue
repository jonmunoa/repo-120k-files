<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42211",
  props: { etiqueta: { type: String, default: "item-42211-v2" } }
};
</script>
