<template>
  <section class="panel-39025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39025");
const base = ref(39025);
const total = computed(() => base.value * 2);

function incrementar39025() {
  base.value++;
}
</script>
