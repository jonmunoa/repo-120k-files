<template>
  <section class="panel-6553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6553");
const base = ref(6553);
const total = computed(() => base.value * 2);

function incrementar6553() {
  base.value++;
}
</script>
