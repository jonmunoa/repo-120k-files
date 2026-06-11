<template>
  <section class="panel-46237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46237");
const base = ref(46237);
const total = computed(() => base.value * 2);

function incrementar46237() {
  base.value++;
}
</script>
