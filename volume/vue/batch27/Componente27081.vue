<template>
  <section class="panel-27081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27081");
const base = ref(27081);
const total = computed(() => base.value * 2);

function incrementar27081() {
  base.value++;
}
</script>
