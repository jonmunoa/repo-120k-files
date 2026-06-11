<template>
  <section class="panel-24873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24873");
const base = ref(24873);
const total = computed(() => base.value * 2);

function incrementar24873() {
  base.value++;
}
</script>
