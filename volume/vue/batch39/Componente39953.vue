<template>
  <section class="panel-39953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39953");
const base = ref(39953);
const total = computed(() => base.value * 2);

function incrementar39953() {
  base.value++;
}
</script>
