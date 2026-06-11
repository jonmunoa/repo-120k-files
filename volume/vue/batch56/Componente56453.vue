<template>
  <section class="panel-56453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56453");
const base = ref(56453);
const total = computed(() => base.value * 2);

function incrementar56453() {
  base.value++;
}
</script>
