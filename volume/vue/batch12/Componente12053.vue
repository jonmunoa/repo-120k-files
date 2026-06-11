<template>
  <section class="panel-12053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12053");
const base = ref(12053);
const total = computed(() => base.value * 2);

function incrementar12053() {
  base.value++;
}
</script>
