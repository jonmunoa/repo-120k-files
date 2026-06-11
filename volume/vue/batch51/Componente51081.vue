<template>
  <section class="panel-51081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51081");
const base = ref(51081);
const total = computed(() => base.value * 2);

function incrementar51081() {
  base.value++;
}
</script>
