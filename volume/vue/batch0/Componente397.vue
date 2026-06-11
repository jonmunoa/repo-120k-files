<template>
  <section class="panel-397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 397");
const base = ref(397);
const total = computed(() => base.value * 2);

function incrementar397() {
  base.value++;
}
</script>
