<template>
  <section class="panel-29081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29081");
const base = ref(29081);
const total = computed(() => base.value * 2);

function incrementar29081() {
  base.value++;
}
</script>
