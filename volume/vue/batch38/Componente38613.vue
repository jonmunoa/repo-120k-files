<template>
  <section class="panel-38613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38613");
const base = ref(38613);
const total = computed(() => base.value * 2);

function incrementar38613() {
  base.value++;
}
</script>
