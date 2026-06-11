<template>
  <section class="panel-31881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31881");
const base = ref(31881);
const total = computed(() => base.value * 2);

function incrementar31881() {
  base.value++;
}
</script>
