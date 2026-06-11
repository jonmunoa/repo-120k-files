<template>
  <section class="panel-57497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57497");
const base = ref(57497);
const total = computed(() => base.value * 2);

function incrementar57497() {
  base.value++;
}
</script>
