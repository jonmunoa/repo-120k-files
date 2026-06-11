<template>
  <section class="panel-32553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32553");
const base = ref(32553);
const total = computed(() => base.value * 2);

function incrementar32553() {
  base.value++;
}
</script>
