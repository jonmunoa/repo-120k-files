<template>
  <section class="panel-16105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16105");
const base = ref(16105);
const total = computed(() => base.value * 2);

function incrementar16105() {
  base.value++;
}
</script>
