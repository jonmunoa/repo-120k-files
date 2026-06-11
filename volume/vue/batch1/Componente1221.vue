<template>
  <section class="panel-1221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1221");
const base = ref(1221);
const total = computed(() => base.value * 2);

function incrementar1221() {
  base.value++;
}
</script>
