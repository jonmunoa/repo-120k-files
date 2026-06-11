<template>
  <section class="panel-37461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37461");
const base = ref(37461);
const total = computed(() => base.value * 2);

function incrementar37461() {
  base.value++;
}
</script>
