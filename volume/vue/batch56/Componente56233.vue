<template>
  <section class="panel-56233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56233");
const base = ref(56233);
const total = computed(() => base.value * 2);

function incrementar56233() {
  base.value++;
}
</script>
