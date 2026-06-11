<template>
  <section class="panel-3261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3261");
const base = ref(3261);
const total = computed(() => base.value * 2);

function incrementar3261() {
  base.value++;
}
</script>
