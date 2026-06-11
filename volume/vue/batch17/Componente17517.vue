<template>
  <section class="panel-17517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17517");
const base = ref(17517);
const total = computed(() => base.value * 2);

function incrementar17517() {
  base.value++;
}
</script>
