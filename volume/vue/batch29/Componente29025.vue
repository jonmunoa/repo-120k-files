<template>
  <section class="panel-29025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29025");
const base = ref(29025);
const total = computed(() => base.value * 2);

function incrementar29025() {
  base.value++;
}
</script>
