<template>
  <section class="panel-35549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35549");
const base = ref(35549);
const total = computed(() => base.value * 2);

function incrementar35549() {
  base.value++;
}
</script>
