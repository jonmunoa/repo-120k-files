<template>
  <section class="panel-20793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20793");
const base = ref(20793);
const total = computed(() => base.value * 2);

function incrementar20793() {
  base.value++;
}
</script>
