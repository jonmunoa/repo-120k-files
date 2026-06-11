<template>
  <section class="panel-53453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53453");
const base = ref(53453);
const total = computed(() => base.value * 2);

function incrementar53453() {
  base.value++;
}
</script>
