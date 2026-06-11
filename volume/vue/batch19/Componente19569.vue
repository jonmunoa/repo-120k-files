<template>
  <section class="panel-19569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19569");
const base = ref(19569);
const total = computed(() => base.value * 2);

function incrementar19569() {
  base.value++;
}
</script>
