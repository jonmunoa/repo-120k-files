<template>
  <section class="panel-21137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21137");
const base = ref(21137);
const total = computed(() => base.value * 2);

function incrementar21137() {
  base.value++;
}
</script>
