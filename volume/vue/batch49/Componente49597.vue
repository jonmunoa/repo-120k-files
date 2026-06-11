<template>
  <section class="panel-49597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49597");
const base = ref(49597);
const total = computed(() => base.value * 2);

function incrementar49597() {
  base.value++;
}
</script>
