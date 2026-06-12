<template>
  <div class="componente-32768">
    <p>{{ mensaje32768 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente32768",
  data() {
    return { mensaje32768: "valor 32768 actualizado" };
  }
};
</script>
