<template>
  <section class="panel-32237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32237");
const base = ref(32237);
const total = computed(() => base.value * 2);

function incrementar32237() {
  base.value++;
}
</script>
