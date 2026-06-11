<template>
  <section class="panel-32317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32317");
const base = ref(32317);
const total = computed(() => base.value * 2);

function incrementar32317() {
  base.value++;
}
</script>
