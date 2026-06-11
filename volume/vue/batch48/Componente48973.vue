<template>
  <section class="panel-48973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48973");
const base = ref(48973);
const total = computed(() => base.value * 2);

function incrementar48973() {
  base.value++;
}
</script>
