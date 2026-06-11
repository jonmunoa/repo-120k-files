<template>
  <section class="panel-32153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32153");
const base = ref(32153);
const total = computed(() => base.value * 2);

function incrementar32153() {
  base.value++;
}
</script>
