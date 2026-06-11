<template>
  <section class="panel-48409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48409");
const base = ref(48409);
const total = computed(() => base.value * 2);

function incrementar48409() {
  base.value++;
}
</script>
