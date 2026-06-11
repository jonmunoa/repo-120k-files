<template>
  <section class="panel-16669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16669");
const base = ref(16669);
const total = computed(() => base.value * 2);

function incrementar16669() {
  base.value++;
}
</script>
