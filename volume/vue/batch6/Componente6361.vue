<template>
  <section class="panel-6361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6361");
const base = ref(6361);
const total = computed(() => base.value * 2);

function incrementar6361() {
  base.value++;
}
</script>
