<template>
  <section class="panel-44557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44557");
const base = ref(44557);
const total = computed(() => base.value * 2);

function incrementar44557() {
  base.value++;
}
</script>
