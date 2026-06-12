<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20203",
  props: { etiqueta: { type: String, default: "item-20203-v2" } }
};
</script>
