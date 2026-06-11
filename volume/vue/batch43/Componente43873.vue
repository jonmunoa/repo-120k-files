<template>
  <section class="panel-43873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43873");
const base = ref(43873);
const total = computed(() => base.value * 2);

function incrementar43873() {
  base.value++;
}
</script>
