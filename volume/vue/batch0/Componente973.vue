<template>
  <section class="panel-973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 973");
const base = ref(973);
const total = computed(() => base.value * 2);

function incrementar973() {
  base.value++;
}
</script>
