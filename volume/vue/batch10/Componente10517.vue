<template>
  <section class="panel-10517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10517");
const base = ref(10517);
const total = computed(() => base.value * 2);

function incrementar10517() {
  base.value++;
}
</script>
