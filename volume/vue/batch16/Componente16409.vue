<template>
  <section class="panel-16409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16409");
const base = ref(16409);
const total = computed(() => base.value * 2);

function incrementar16409() {
  base.value++;
}
</script>
