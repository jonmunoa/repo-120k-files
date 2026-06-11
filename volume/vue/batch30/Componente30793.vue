<template>
  <section class="panel-30793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30793");
const base = ref(30793);
const total = computed(() => base.value * 2);

function incrementar30793() {
  base.value++;
}
</script>
