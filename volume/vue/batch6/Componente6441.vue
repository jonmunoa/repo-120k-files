<template>
  <section class="panel-6441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6441");
const base = ref(6441);
const total = computed(() => base.value * 2);

function incrementar6441() {
  base.value++;
}
</script>
