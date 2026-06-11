<template>
  <section class="panel-48741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48741");
const base = ref(48741);
const total = computed(() => base.value * 2);

function incrementar48741() {
  base.value++;
}
</script>
