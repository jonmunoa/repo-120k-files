<template>
  <div class="componente-100">
    <p>{{ mensaje100 }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Componente100",
  data() {
    return { mensaje100: "valor 100 actualizado" };
  }
};
</script>
