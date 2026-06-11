<template>
  <section class="panel-3409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3409");
const base = ref(3409);
const total = computed(() => base.value * 2);

function incrementar3409() {
  base.value++;
}
</script>
