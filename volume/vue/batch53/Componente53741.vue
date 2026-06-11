<template>
  <section class="panel-53741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53741");
const base = ref(53741);
const total = computed(() => base.value * 2);

function incrementar53741() {
  base.value++;
}
</script>
