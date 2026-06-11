<template>
  <section class="panel-24081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24081");
const base = ref(24081);
const total = computed(() => base.value * 2);

function incrementar24081() {
  base.value++;
}
</script>
