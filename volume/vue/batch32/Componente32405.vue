<template>
  <section class="panel-32405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32405");
const base = ref(32405);
const total = computed(() => base.value * 2);

function incrementar32405() {
  base.value++;
}
</script>
