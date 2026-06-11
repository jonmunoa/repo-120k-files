<template>
  <section class="panel-42001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42001");
const base = ref(42001);
const total = computed(() => base.value * 2);

function incrementar42001() {
  base.value++;
}
</script>
