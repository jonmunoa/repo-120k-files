<template>
  <section class="panel-45581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45581");
const base = ref(45581);
const total = computed(() => base.value * 2);

function incrementar45581() {
  base.value++;
}
</script>
