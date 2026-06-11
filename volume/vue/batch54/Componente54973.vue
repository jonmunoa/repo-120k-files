<template>
  <section class="panel-54973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54973");
const base = ref(54973);
const total = computed(() => base.value * 2);

function incrementar54973() {
  base.value++;
}
</script>
