<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42483",
  props: { etiqueta: { type: String, default: "item-42483-v2" } }
};
</script>
