<template>
  <section class="panel-1873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1873");
const base = ref(1873);
const total = computed(() => base.value * 2);

function incrementar1873() {
  base.value++;
}
</script>
