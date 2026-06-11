<template>
  <section class="panel-3065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3065");
const base = ref(3065);
const total = computed(() => base.value * 2);

function incrementar3065() {
  base.value++;
}
</script>
