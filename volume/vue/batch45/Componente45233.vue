<template>
  <section class="panel-45233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45233");
const base = ref(45233);
const total = computed(() => base.value * 2);

function incrementar45233() {
  base.value++;
}
</script>
