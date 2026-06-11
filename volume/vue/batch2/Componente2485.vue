<template>
  <section class="panel-2485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2485");
const base = ref(2485);
const total = computed(() => base.value * 2);

function incrementar2485() {
  base.value++;
}
</script>
