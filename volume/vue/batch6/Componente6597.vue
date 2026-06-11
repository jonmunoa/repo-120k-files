<template>
  <section class="panel-6597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6597");
const base = ref(6597);
const total = computed(() => base.value * 2);

function incrementar6597() {
  base.value++;
}
</script>
