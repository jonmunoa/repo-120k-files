<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20123",
  props: { etiqueta: { type: String, default: "item-20123-v2" } }
};
</script>
