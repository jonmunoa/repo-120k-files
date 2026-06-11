<template>
  <section class="panel-55801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55801");
const base = ref(55801);
const total = computed(() => base.value * 2);

function incrementar55801() {
  base.value++;
}
</script>
