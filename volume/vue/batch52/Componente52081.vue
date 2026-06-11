<template>
  <section class="panel-52081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52081");
const base = ref(52081);
const total = computed(() => base.value * 2);

function incrementar52081() {
  base.value++;
}
</script>
