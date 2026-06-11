<template>
  <section class="panel-4409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4409");
const base = ref(4409);
const total = computed(() => base.value * 2);

function incrementar4409() {
  base.value++;
}
</script>
