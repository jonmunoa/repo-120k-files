<template>
  <section class="panel-45081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45081");
const base = ref(45081);
const total = computed(() => base.value * 2);

function incrementar45081() {
  base.value++;
}
</script>
