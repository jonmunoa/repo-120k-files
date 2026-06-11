<template>
  <section class="panel-14081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14081");
const base = ref(14081);
const total = computed(() => base.value * 2);

function incrementar14081() {
  base.value++;
}
</script>
