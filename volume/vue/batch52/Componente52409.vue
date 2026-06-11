<template>
  <section class="panel-52409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52409");
const base = ref(52409);
const total = computed(() => base.value * 2);

function incrementar52409() {
  base.value++;
}
</script>
