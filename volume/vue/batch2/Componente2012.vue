<template>
  <div class="componente-2012">
    <p>{{ mensaje2012 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2012",
  data() {
    return { mensaje2012: "valor 2012 actualizado" };
  }
};
</script>
