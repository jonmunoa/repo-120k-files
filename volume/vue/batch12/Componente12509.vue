<template>
  <section class="panel-12509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12509");
const base = ref(12509);
const total = computed(() => base.value * 2);

function incrementar12509() {
  base.value++;
}
</script>
