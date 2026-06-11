<template>
  <section class="panel-36797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36797");
const base = ref(36797);
const total = computed(() => base.value * 2);

function incrementar36797() {
  base.value++;
}
</script>
