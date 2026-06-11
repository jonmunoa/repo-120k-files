<template>
  <section class="panel-56793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56793");
const base = ref(56793);
const total = computed(() => base.value * 2);

function incrementar56793() {
  base.value++;
}
</script>
