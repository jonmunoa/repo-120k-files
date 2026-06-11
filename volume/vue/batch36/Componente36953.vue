<template>
  <section class="panel-36953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36953");
const base = ref(36953);
const total = computed(() => base.value * 2);

function incrementar36953() {
  base.value++;
}
</script>
