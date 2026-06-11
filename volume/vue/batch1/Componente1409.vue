<template>
  <section class="panel-1409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1409");
const base = ref(1409);
const total = computed(() => base.value * 2);

function incrementar1409() {
  base.value++;
}
</script>
