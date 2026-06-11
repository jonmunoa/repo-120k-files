<template>
  <section class="panel-56665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56665");
const base = ref(56665);
const total = computed(() => base.value * 2);

function incrementar56665() {
  base.value++;
}
</script>
