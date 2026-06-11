<template>
  <section class="panel-10265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10265");
const base = ref(10265);
const total = computed(() => base.value * 2);

function incrementar10265() {
  base.value++;
}
</script>
