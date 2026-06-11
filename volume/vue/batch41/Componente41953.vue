<template>
  <section class="panel-41953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41953");
const base = ref(41953);
const total = computed(() => base.value * 2);

function incrementar41953() {
  base.value++;
}
</script>
