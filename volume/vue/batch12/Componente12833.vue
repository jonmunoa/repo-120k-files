<template>
  <section class="panel-12833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12833");
const base = ref(12833);
const total = computed(() => base.value * 2);

function incrementar12833() {
  base.value++;
}
</script>
