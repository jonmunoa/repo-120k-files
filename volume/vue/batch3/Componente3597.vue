<template>
  <section class="panel-3597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3597");
const base = ref(3597);
const total = computed(() => base.value * 2);

function incrementar3597() {
  base.value++;
}
</script>
