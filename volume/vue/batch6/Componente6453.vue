<template>
  <section class="panel-6453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6453");
const base = ref(6453);
const total = computed(() => base.value * 2);

function incrementar6453() {
  base.value++;
}
</script>
