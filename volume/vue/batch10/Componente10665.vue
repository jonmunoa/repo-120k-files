<template>
  <section class="panel-10665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10665");
const base = ref(10665);
const total = computed(() => base.value * 2);

function incrementar10665() {
  base.value++;
}
</script>
