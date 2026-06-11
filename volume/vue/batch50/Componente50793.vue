<template>
  <section class="panel-50793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50793");
const base = ref(50793);
const total = computed(() => base.value * 2);

function incrementar50793() {
  base.value++;
}
</script>
