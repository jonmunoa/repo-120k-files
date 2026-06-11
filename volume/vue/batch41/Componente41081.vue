<template>
  <section class="panel-41081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41081");
const base = ref(41081);
const total = computed(() => base.value * 2);

function incrementar41081() {
  base.value++;
}
</script>
