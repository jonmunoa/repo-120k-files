<template>
  <section class="panel-10341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10341");
const base = ref(10341);
const total = computed(() => base.value * 2);

function incrementar10341() {
  base.value++;
}
</script>
