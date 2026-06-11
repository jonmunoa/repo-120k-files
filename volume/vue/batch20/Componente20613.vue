<template>
  <section class="panel-20613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20613");
const base = ref(20613);
const total = computed(() => base.value * 2);

function incrementar20613() {
  base.value++;
}
</script>
