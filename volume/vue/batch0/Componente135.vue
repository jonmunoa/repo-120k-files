<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item135",
  props: { etiqueta: { type: String, default: "item-135-v2" } }
};
</script>
