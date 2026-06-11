<template>
  <section class="panel-42093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42093");
const base = ref(42093);
const total = computed(() => base.value * 2);

function incrementar42093() {
  base.value++;
}
</script>
