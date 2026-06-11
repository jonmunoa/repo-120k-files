<template>
  <section class="panel-39065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39065");
const base = ref(39065);
const total = computed(() => base.value * 2);

function incrementar39065() {
  base.value++;
}
</script>
