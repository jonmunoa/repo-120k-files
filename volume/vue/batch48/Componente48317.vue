<template>
  <section class="panel-48317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48317");
const base = ref(48317);
const total = computed(() => base.value * 2);

function incrementar48317() {
  base.value++;
}
</script>
