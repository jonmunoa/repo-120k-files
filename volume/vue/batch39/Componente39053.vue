<template>
  <section class="panel-39053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39053");
const base = ref(39053);
const total = computed(() => base.value * 2);

function incrementar39053() {
  base.value++;
}
</script>
