<template>
  <div class="componente-2000">
    <p>{{ mensaje2000 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2000",
  data() {
    return { mensaje2000: "valor 2000 actualizado" };
  }
};
</script>
