<template>
  <section class="panel-56581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56581");
const base = ref(56581);
const total = computed(() => base.value * 2);

function incrementar56581() {
  base.value++;
}
</script>
