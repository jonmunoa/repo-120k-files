<template>
  <section class="panel-38753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38753");
const base = ref(38753);
const total = computed(() => base.value * 2);

function incrementar38753() {
  base.value++;
}
</script>
