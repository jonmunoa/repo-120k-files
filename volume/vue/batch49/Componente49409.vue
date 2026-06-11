<template>
  <section class="panel-49409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49409");
const base = ref(49409);
const total = computed(() => base.value * 2);

function incrementar49409() {
  base.value++;
}
</script>
