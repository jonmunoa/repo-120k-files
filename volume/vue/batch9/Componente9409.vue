<template>
  <section class="panel-9409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9409");
const base = ref(9409);
const total = computed(() => base.value * 2);

function incrementar9409() {
  base.value++;
}
</script>
