<template>
  <section class="panel-22461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22461");
const base = ref(22461);
const total = computed(() => base.value * 2);

function incrementar22461() {
  base.value++;
}
</script>
