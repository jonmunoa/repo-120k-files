<template>
  <section class="panel-19233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19233");
const base = ref(19233);
const total = computed(() => base.value * 2);

function incrementar19233() {
  base.value++;
}
</script>
