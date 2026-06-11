<template>
  <section class="panel-16225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16225");
const base = ref(16225);
const total = computed(() => base.value * 2);

function incrementar16225() {
  base.value++;
}
</script>
