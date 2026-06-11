<template>
  <section class="panel-2793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2793");
const base = ref(2793);
const total = computed(() => base.value * 2);

function incrementar2793() {
  base.value++;
}
</script>
