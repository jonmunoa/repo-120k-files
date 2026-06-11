<template>
  <section class="panel-21461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21461");
const base = ref(21461);
const total = computed(() => base.value * 2);

function incrementar21461() {
  base.value++;
}
</script>
