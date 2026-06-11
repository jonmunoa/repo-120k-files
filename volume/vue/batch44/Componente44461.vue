<template>
  <section class="panel-44461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44461");
const base = ref(44461);
const total = computed(() => base.value * 2);

function incrementar44461() {
  base.value++;
}
</script>
