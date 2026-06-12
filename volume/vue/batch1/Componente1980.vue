<template>
  <div class="componente-1980">
    <p>{{ mensaje1980 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente1980",
  data() {
    return { mensaje1980: "valor 1980 actualizado" };
  }
};
</script>
