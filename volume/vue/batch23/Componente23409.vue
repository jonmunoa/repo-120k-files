<template>
  <section class="panel-23409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23409");
const base = ref(23409);
const total = computed(() => base.value * 2);

function incrementar23409() {
  base.value++;
}
</script>
