<template>
  <section class="panel-15225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15225");
const base = ref(15225);
const total = computed(() => base.value * 2);

function incrementar15225() {
  base.value++;
}
</script>
