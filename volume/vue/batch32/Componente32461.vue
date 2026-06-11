<template>
  <section class="panel-32461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32461");
const base = ref(32461);
const total = computed(() => base.value * 2);

function incrementar32461() {
  base.value++;
}
</script>
