<template>
  <section class="panel-41673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41673");
const base = ref(41673);
const total = computed(() => base.value * 2);

function incrementar41673() {
  base.value++;
}
</script>
