<template>
  <section class="panel-38237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38237");
const base = ref(38237);
const total = computed(() => base.value * 2);

function incrementar38237() {
  base.value++;
}
</script>
