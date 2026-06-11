<template>
  <section class="panel-4625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4625");
const base = ref(4625);
const total = computed(() => base.value * 2);

function incrementar4625() {
  base.value++;
}
</script>
