<template>
  <section class="panel-10753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10753");
const base = ref(10753);
const total = computed(() => base.value * 2);

function incrementar10753() {
  base.value++;
}
</script>
