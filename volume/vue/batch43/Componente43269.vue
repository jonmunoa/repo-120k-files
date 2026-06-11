<template>
  <section class="panel-43269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43269");
const base = ref(43269);
const total = computed(() => base.value * 2);

function incrementar43269() {
  base.value++;
}
</script>
