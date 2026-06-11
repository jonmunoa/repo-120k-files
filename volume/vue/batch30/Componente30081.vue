<template>
  <section class="panel-30081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30081");
const base = ref(30081);
const total = computed(() => base.value * 2);

function incrementar30081() {
  base.value++;
}
</script>
