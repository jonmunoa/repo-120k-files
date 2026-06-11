<template>
  <section class="panel-47793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47793");
const base = ref(47793);
const total = computed(() => base.value * 2);

function incrementar47793() {
  base.value++;
}
</script>
