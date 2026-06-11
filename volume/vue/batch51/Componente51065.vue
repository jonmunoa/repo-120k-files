<template>
  <section class="panel-51065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51065");
const base = ref(51065);
const total = computed(() => base.value * 2);

function incrementar51065() {
  base.value++;
}
</script>
