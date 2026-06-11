<template>
  <section class="panel-36873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36873");
const base = ref(36873);
const total = computed(() => base.value * 2);

function incrementar36873() {
  base.value++;
}
</script>
