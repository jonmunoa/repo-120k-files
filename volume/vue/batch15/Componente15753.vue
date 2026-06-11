<template>
  <section class="panel-15753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15753");
const base = ref(15753);
const total = computed(() => base.value * 2);

function incrementar15753() {
  base.value++;
}
</script>
