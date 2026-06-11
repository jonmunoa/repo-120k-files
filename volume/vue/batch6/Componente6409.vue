<template>
  <section class="panel-6409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6409");
const base = ref(6409);
const total = computed(() => base.value * 2);

function incrementar6409() {
  base.value++;
}
</script>
