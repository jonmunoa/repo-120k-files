<template>
  <section class="panel-6509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6509");
const base = ref(6509);
const total = computed(() => base.value * 2);

function incrementar6509() {
  base.value++;
}
</script>
