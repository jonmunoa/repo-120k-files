<template>
  <section class="panel-43469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43469");
const base = ref(43469);
const total = computed(() => base.value * 2);

function incrementar43469() {
  base.value++;
}
</script>
