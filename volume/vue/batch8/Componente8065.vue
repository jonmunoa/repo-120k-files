<template>
  <section class="panel-8065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8065");
const base = ref(8065);
const total = computed(() => base.value * 2);

function incrementar8065() {
  base.value++;
}
</script>
