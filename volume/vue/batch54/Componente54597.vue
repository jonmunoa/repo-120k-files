<template>
  <section class="panel-54597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54597");
const base = ref(54597);
const total = computed(() => base.value * 2);

function incrementar54597() {
  base.value++;
}
</script>
