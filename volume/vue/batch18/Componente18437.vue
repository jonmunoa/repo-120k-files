<template>
  <section class="panel-18437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18437");
const base = ref(18437);
const total = computed(() => base.value * 2);

function incrementar18437() {
  base.value++;
}
</script>
