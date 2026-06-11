<template>
  <section class="panel-9269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9269");
const base = ref(9269);
const total = computed(() => base.value * 2);

function incrementar9269() {
  base.value++;
}
</script>
