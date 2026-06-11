<template>
  <section class="panel-50729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50729");
const base = ref(50729);
const total = computed(() => base.value * 2);

function incrementar50729() {
  base.value++;
}
</script>
