<template>
  <section class="panel-12677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12677");
const base = ref(12677);
const total = computed(() => base.value * 2);

function incrementar12677() {
  base.value++;
}
</script>
