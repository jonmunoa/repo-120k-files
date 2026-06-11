<template>
  <section class="panel-35613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35613");
const base = ref(35613);
const total = computed(() => base.value * 2);

function incrementar35613() {
  base.value++;
}
</script>
