<template>
  <section class="panel-43597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43597");
const base = ref(43597);
const total = computed(() => base.value * 2);

function incrementar43597() {
  base.value++;
}
</script>
