<template>
  <section class="panel-43033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43033");
const base = ref(43033);
const total = computed(() => base.value * 2);

function incrementar43033() {
  base.value++;
}
</script>
