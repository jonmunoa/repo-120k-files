<template>
  <section class="panel-2409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2409");
const base = ref(2409);
const total = computed(() => base.value * 2);

function incrementar2409() {
  base.value++;
}
</script>
