<template>
  <section class="panel-42625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42625");
const base = ref(42625);
const total = computed(() => base.value * 2);

function incrementar42625() {
  base.value++;
}
</script>
