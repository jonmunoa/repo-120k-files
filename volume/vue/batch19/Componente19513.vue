<template>
  <section class="panel-19513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19513");
const base = ref(19513);
const total = computed(() => base.value * 2);

function incrementar19513() {
  base.value++;
}
</script>
