<template>
  <section class="panel-39597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39597");
const base = ref(39597);
const total = computed(() => base.value * 2);

function incrementar39597() {
  base.value++;
}
</script>
