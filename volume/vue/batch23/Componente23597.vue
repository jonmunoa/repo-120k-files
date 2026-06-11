<template>
  <section class="panel-23597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23597");
const base = ref(23597);
const total = computed(() => base.value * 2);

function incrementar23597() {
  base.value++;
}
</script>
