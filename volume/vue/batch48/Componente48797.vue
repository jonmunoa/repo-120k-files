<template>
  <section class="panel-48797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48797");
const base = ref(48797);
const total = computed(() => base.value * 2);

function incrementar48797() {
  base.value++;
}
</script>
