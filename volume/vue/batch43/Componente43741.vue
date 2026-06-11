<template>
  <section class="panel-43741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43741");
const base = ref(43741);
const total = computed(() => base.value * 2);

function incrementar43741() {
  base.value++;
}
</script>
