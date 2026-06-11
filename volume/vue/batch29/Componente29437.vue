<template>
  <section class="panel-29437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29437");
const base = ref(29437);
const total = computed(() => base.value * 2);

function incrementar29437() {
  base.value++;
}
</script>
