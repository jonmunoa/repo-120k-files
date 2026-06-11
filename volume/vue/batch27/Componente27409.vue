<template>
  <section class="panel-27409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27409");
const base = ref(27409);
const total = computed(() => base.value * 2);

function incrementar27409() {
  base.value++;
}
</script>
