<template>
  <div class="componente-2004">
    <p>{{ mensaje2004 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2004",
  data() {
    return { mensaje2004: "valor 2004 actualizado" };
  }
};
</script>
