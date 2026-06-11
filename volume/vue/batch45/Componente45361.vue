<template>
  <section class="panel-45361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45361");
const base = ref(45361);
const total = computed(() => base.value * 2);

function incrementar45361() {
  base.value++;
}
</script>
