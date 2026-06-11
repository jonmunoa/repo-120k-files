<template>
  <section class="panel-49081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49081");
const base = ref(49081);
const total = computed(() => base.value * 2);

function incrementar49081() {
  base.value++;
}
</script>
