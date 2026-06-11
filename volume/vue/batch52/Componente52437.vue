<template>
  <section class="panel-52437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52437");
const base = ref(52437);
const total = computed(() => base.value * 2);

function incrementar52437() {
  base.value++;
}
</script>
