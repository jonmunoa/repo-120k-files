<template>
  <section class="panel-38565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38565");
const base = ref(38565);
const total = computed(() => base.value * 2);

function incrementar38565() {
  base.value++;
}
</script>
