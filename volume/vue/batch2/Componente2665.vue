<template>
  <section class="panel-2665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2665");
const base = ref(2665);
const total = computed(() => base.value * 2);

function incrementar2665() {
  base.value++;
}
</script>
