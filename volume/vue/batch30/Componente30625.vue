<template>
  <section class="panel-30625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30625");
const base = ref(30625);
const total = computed(() => base.value * 2);

function incrementar30625() {
  base.value++;
}
</script>
