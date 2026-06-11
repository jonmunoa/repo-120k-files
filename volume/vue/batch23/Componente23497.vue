<template>
  <section class="panel-23497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23497");
const base = ref(23497);
const total = computed(() => base.value * 2);

function incrementar23497() {
  base.value++;
}
</script>
