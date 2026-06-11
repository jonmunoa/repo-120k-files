<template>
  <section class="panel-29625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29625");
const base = ref(29625);
const total = computed(() => base.value * 2);

function incrementar29625() {
  base.value++;
}
</script>
