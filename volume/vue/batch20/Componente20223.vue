<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20223",
  props: { etiqueta: { type: String, default: "item-20223-v2" } }
};
</script>
