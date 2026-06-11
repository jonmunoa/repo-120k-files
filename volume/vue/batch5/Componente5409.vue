<template>
  <section class="panel-5409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5409");
const base = ref(5409);
const total = computed(() => base.value * 2);

function incrementar5409() {
  base.value++;
}
</script>
