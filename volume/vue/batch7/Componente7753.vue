<template>
  <section class="panel-7753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7753");
const base = ref(7753);
const total = computed(() => base.value * 2);

function incrementar7753() {
  base.value++;
}
</script>
