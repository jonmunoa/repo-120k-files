<template>
  <section class="panel-1625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1625");
const base = ref(1625);
const total = computed(() => base.value * 2);

function incrementar1625() {
  base.value++;
}
</script>
