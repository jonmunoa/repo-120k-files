<template>
  <section class="panel-21081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21081");
const base = ref(21081);
const total = computed(() => base.value * 2);

function incrementar21081() {
  base.value++;
}
</script>
