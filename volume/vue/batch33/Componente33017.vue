<template>
  <section class="panel-33017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33017");
const base = ref(33017);
const total = computed(() => base.value * 2);

function incrementar33017() {
  base.value++;
}
</script>
