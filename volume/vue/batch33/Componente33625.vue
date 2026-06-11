<template>
  <section class="panel-33625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33625");
const base = ref(33625);
const total = computed(() => base.value * 2);

function incrementar33625() {
  base.value++;
}
</script>
