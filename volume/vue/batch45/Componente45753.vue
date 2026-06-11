<template>
  <section class="panel-45753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45753");
const base = ref(45753);
const total = computed(() => base.value * 2);

function incrementar45753() {
  base.value++;
}
</script>
