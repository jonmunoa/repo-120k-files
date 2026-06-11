<template>
  <section class="panel-21793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21793");
const base = ref(21793);
const total = computed(() => base.value * 2);

function incrementar21793() {
  base.value++;
}
</script>
