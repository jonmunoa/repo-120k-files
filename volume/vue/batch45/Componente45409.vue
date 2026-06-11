<template>
  <section class="panel-45409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45409");
const base = ref(45409);
const total = computed(() => base.value * 2);

function incrementar45409() {
  base.value++;
}
</script>
