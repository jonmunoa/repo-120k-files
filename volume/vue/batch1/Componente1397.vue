<template>
  <section class="panel-1397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1397");
const base = ref(1397);
const total = computed(() => base.value * 2);

function incrementar1397() {
  base.value++;
}
</script>
