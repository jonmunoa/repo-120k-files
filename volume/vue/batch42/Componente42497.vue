<template>
  <section class="panel-42497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42497");
const base = ref(42497);
const total = computed(() => base.value * 2);

function incrementar42497() {
  base.value++;
}
</script>
