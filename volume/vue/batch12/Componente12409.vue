<template>
  <section class="panel-12409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12409");
const base = ref(12409);
const total = computed(() => base.value * 2);

function incrementar12409() {
  base.value++;
}
</script>
