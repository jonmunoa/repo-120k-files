<template>
  <section class="panel-44025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44025");
const base = ref(44025);
const total = computed(() => base.value * 2);

function incrementar44025() {
  base.value++;
}
</script>
