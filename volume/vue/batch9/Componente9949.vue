<template>
  <section class="panel-9949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9949");
const base = ref(9949);
const total = computed(() => base.value * 2);

function incrementar9949() {
  base.value++;
}
</script>
