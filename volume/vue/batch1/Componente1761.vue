<template>
  <section class="panel-1761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1761");
const base = ref(1761);
const total = computed(() => base.value * 2);

function incrementar1761() {
  base.value++;
}
</script>
