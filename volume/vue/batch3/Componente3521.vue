<template>
  <section class="panel-3521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3521");
const base = ref(3521);
const total = computed(() => base.value * 2);

function incrementar3521() {
  base.value++;
}
</script>
