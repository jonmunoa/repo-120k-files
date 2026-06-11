<template>
  <section class="panel-1797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1797");
const base = ref(1797);
const total = computed(() => base.value * 2);

function incrementar1797() {
  base.value++;
}
</script>
