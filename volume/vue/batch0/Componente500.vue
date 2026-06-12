<template>
  <div class="componente-500">
    <p>{{ mensaje500 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente500",
  data() {
    return { mensaje500: "valor 500 actualizado" };
  }
};
</script>
