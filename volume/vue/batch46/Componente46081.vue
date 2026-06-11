<template>
  <section class="panel-46081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46081");
const base = ref(46081);
const total = computed(() => base.value * 2);

function incrementar46081() {
  base.value++;
}
</script>
