<template>
  <section class="panel-4081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4081");
const base = ref(4081);
const total = computed(() => base.value * 2);

function incrementar4081() {
  base.value++;
}
</script>
