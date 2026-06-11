<template>
  <section class="panel-50461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50461");
const base = ref(50461);
const total = computed(() => base.value * 2);

function incrementar50461() {
  base.value++;
}
</script>
