<template>
  <section class="panel-16873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16873");
const base = ref(16873);
const total = computed(() => base.value * 2);

function incrementar16873() {
  base.value++;
}
</script>
