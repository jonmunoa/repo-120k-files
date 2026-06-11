<template>
  <section class="panel-27189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27189");
const base = ref(27189);
const total = computed(() => base.value * 2);

function incrementar27189() {
  base.value++;
}
</script>
