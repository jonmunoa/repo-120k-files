<template>
  <section class="panel-16233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16233");
const base = ref(16233);
const total = computed(() => base.value * 2);

function incrementar16233() {
  base.value++;
}
</script>
