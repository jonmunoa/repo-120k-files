<template>
  <section class="panel-41797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41797");
const base = ref(41797);
const total = computed(() => base.value * 2);

function incrementar41797() {
  base.value++;
}
</script>
