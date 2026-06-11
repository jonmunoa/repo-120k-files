<template>
  <section class="panel-9453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9453");
const base = ref(9453);
const total = computed(() => base.value * 2);

function incrementar9453() {
  base.value++;
}
</script>
