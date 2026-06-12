<template>
  <div class="componente-4">
    <p>{{ mensaje4 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente4",
  data() {
    return { mensaje4: "valor 4 actualizado" };
  }
};
</script>
