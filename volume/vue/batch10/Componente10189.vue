<template>
  <section class="panel-10189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10189");
const base = ref(10189);
const total = computed(() => base.value * 2);

function incrementar10189() {
  base.value++;
}
</script>
