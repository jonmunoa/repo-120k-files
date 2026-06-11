<template>
  <section class="panel-50565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50565");
const base = ref(50565);
const total = computed(() => base.value * 2);

function incrementar50565() {
  base.value++;
}
</script>
