<template>
  <section class="panel-7409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7409");
const base = ref(7409);
const total = computed(() => base.value * 2);

function incrementar7409() {
  base.value++;
}
</script>
