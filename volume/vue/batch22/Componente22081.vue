<template>
  <section class="panel-22081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22081");
const base = ref(22081);
const total = computed(() => base.value * 2);

function incrementar22081() {
  base.value++;
}
</script>
