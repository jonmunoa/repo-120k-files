<template>
  <section class="panel-24693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24693");
const base = ref(24693);
const total = computed(() => base.value * 2);

function incrementar24693() {
  base.value++;
}
</script>
