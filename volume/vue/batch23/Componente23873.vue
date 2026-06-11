<template>
  <section class="panel-23873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23873");
const base = ref(23873);
const total = computed(() => base.value * 2);

function incrementar23873() {
  base.value++;
}
</script>
