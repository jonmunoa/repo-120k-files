<template>
  <div class="componente-2020">
    <p>{{ mensaje2020 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2020",
  data() {
    return { mensaje2020: "valor 2020 actualizado" };
  }
};
</script>
