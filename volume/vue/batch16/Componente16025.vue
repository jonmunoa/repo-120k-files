<template>
  <section class="panel-16025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16025");
const base = ref(16025);
const total = computed(() => base.value * 2);

function incrementar16025() {
  base.value++;
}
</script>
