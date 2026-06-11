<template>
  <section class="panel-50233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50233");
const base = ref(50233);
const total = computed(() => base.value * 2);

function incrementar50233() {
  base.value++;
}
</script>
