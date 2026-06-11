<template>
  <section class="panel-7237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7237");
const base = ref(7237);
const total = computed(() => base.value * 2);

function incrementar7237() {
  base.value++;
}
</script>
