<template>
  <section class="panel-23665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23665");
const base = ref(23665);
const total = computed(() => base.value * 2);

function incrementar23665() {
  base.value++;
}
</script>
