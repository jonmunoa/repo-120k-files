<template>
  <section class="panel-21189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21189");
const base = ref(21189);
const total = computed(() => base.value * 2);

function incrementar21189() {
  base.value++;
}
</script>
