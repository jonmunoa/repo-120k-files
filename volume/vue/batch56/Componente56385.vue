<template>
  <section class="panel-56385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56385");
const base = ref(56385);
const total = computed(() => base.value * 2);

function incrementar56385() {
  base.value++;
}
</script>
