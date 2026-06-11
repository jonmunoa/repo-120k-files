<template>
  <section class="panel-48529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48529");
const base = ref(48529);
const total = computed(() => base.value * 2);

function incrementar48529() {
  base.value++;
}
</script>
