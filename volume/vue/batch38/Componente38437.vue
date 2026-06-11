<template>
  <section class="panel-38437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38437");
const base = ref(38437);
const total = computed(() => base.value * 2);

function incrementar38437() {
  base.value++;
}
</script>
