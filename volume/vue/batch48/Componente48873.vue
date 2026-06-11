<template>
  <section class="panel-48873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48873");
const base = ref(48873);
const total = computed(() => base.value * 2);

function incrementar48873() {
  base.value++;
}
</script>
