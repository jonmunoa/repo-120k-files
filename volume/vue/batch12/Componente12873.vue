<template>
  <section class="panel-12873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12873");
const base = ref(12873);
const total = computed(() => base.value * 2);

function incrementar12873() {
  base.value++;
}
</script>
