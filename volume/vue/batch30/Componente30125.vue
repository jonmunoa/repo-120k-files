<template>
  <section class="panel-30125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30125");
const base = ref(30125);
const total = computed(() => base.value * 2);

function incrementar30125() {
  base.value++;
}
</script>
