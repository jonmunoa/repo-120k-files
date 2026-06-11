<template>
  <section class="panel-3677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3677");
const base = ref(3677);
const total = computed(() => base.value * 2);

function incrementar3677() {
  base.value++;
}
</script>
