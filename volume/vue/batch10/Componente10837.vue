<template>
  <section class="panel-10837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10837");
const base = ref(10837);
const total = computed(() => base.value * 2);

function incrementar10837() {
  base.value++;
}
</script>
