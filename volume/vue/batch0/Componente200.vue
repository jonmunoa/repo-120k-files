<template>
  <div class="componente-200">
    <p>{{ mensaje200 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente200",
  data() {
    return { mensaje200: "valor 200 actualizado" };
  }
};
</script>
