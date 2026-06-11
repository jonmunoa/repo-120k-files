<template>
  <section class="panel-51753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51753");
const base = ref(51753);
const total = computed(() => base.value * 2);

function incrementar51753() {
  base.value++;
}
</script>
