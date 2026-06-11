<template>
  <section class="panel-50809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50809");
const base = ref(50809);
const total = computed(() => base.value * 2);

function incrementar50809() {
  base.value++;
}
</script>
