<template>
  <section class="panel-44873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44873");
const base = ref(44873);
const total = computed(() => base.value * 2);

function incrementar44873() {
  base.value++;
}
</script>
