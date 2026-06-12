<template>
  <div class="componente-1000">
    <p>{{ mensaje1000 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente1000",
  data() {
    return { mensaje1000: "valor 1000 actualizado" };
  }
};
</script>
