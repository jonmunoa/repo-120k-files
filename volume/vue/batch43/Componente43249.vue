<template>
  <section class="panel-43249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43249");
const base = ref(43249);
const total = computed(() => base.value * 2);

function incrementar43249() {
  base.value++;
}
</script>
