<template>
  <section class="panel-24953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24953");
const base = ref(24953);
const total = computed(() => base.value * 2);

function incrementar24953() {
  base.value++;
}
</script>
