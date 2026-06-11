<template>
  <section class="panel-30893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30893");
const base = ref(30893);
const total = computed(() => base.value * 2);

function incrementar30893() {
  base.value++;
}
</script>
