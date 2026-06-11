<template>
  <section class="panel-35793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35793");
const base = ref(35793);
const total = computed(() => base.value * 2);

function incrementar35793() {
  base.value++;
}
</script>
