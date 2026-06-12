<template>
  <div class="componente-2016">
    <p>{{ mensaje2016 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2016",
  data() {
    return { mensaje2016: "valor 2016 actualizado" };
  }
};
</script>
