<template>
  <section class="panel-1025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1025");
const base = ref(1025);
const total = computed(() => base.value * 2);

function incrementar1025() {
  base.value++;
}
</script>
