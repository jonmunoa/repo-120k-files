<template>
  <div class="componente-2048">
    <p>{{ mensaje2048 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2048",
  data() {
    return { mensaje2048: "valor 2048 actualizado" };
  }
};
</script>
