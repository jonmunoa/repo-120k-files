<template>
  <section class="panel-32409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32409");
const base = ref(32409);
const total = computed(() => base.value * 2);

function incrementar32409() {
  base.value++;
}
</script>
