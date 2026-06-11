<template>
  <section class="panel-18793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18793");
const base = ref(18793);
const total = computed(() => base.value * 2);

function incrementar18793() {
  base.value++;
}
</script>
