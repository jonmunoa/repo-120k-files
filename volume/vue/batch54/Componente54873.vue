<template>
  <section class="panel-54873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54873");
const base = ref(54873);
const total = computed(() => base.value * 2);

function incrementar54873() {
  base.value++;
}
</script>
