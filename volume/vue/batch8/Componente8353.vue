<template>
  <section class="panel-8353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8353");
const base = ref(8353);
const total = computed(() => base.value * 2);

function incrementar8353() {
  base.value++;
}
</script>
