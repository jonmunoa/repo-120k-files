<template>
  <section class="panel-15597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15597");
const base = ref(15597);
const total = computed(() => base.value * 2);

function incrementar15597() {
  base.value++;
}
</script>
