<template>
  <div class="componente-2008">
    <p>{{ mensaje2008 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente2008",
  data() {
    return { mensaje2008: "valor 2008 actualizado" };
  }
};
</script>
