<template>
  <section class="panel-36597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36597");
const base = ref(36597);
const total = computed(() => base.value * 2);

function incrementar36597() {
  base.value++;
}
</script>
