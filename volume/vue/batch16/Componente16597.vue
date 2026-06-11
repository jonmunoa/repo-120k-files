<template>
  <section class="panel-16597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16597");
const base = ref(16597);
const total = computed(() => base.value * 2);

function incrementar16597() {
  base.value++;
}
</script>
