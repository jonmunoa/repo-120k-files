<template>
  <section class="panel-6053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6053");
const base = ref(6053);
const total = computed(() => base.value * 2);

function incrementar6053() {
  base.value++;
}
</script>
