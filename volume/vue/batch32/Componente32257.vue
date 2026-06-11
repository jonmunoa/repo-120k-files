<template>
  <section class="panel-32257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32257");
const base = ref(32257);
const total = computed(() => base.value * 2);

function incrementar32257() {
  base.value++;
}
</script>
