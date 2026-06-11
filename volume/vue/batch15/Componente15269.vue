<template>
  <section class="panel-15269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15269");
const base = ref(15269);
const total = computed(() => base.value * 2);

function incrementar15269() {
  base.value++;
}
</script>
