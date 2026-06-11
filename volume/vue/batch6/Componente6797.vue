<template>
  <section class="panel-6797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6797");
const base = ref(6797);
const total = computed(() => base.value * 2);

function incrementar6797() {
  base.value++;
}
</script>
