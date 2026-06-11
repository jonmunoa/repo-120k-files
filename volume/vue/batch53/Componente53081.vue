<template>
  <section class="panel-53081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53081");
const base = ref(53081);
const total = computed(() => base.value * 2);

function incrementar53081() {
  base.value++;
}
</script>
