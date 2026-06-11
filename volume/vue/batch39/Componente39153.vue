<template>
  <section class="panel-39153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39153");
const base = ref(39153);
const total = computed(() => base.value * 2);

function incrementar39153() {
  base.value++;
}
</script>
