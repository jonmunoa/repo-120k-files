<template>
  <section class="panel-2437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2437");
const base = ref(2437);
const total = computed(() => base.value * 2);

function incrementar2437() {
  base.value++;
}
</script>
