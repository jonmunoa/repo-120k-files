<template>
  <section class="panel-23149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23149");
const base = ref(23149);
const total = computed(() => base.value * 2);

function incrementar23149() {
  base.value++;
}
</script>
