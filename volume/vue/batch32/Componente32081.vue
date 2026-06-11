<template>
  <section class="panel-32081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32081");
const base = ref(32081);
const total = computed(() => base.value * 2);

function incrementar32081() {
  base.value++;
}
</script>
