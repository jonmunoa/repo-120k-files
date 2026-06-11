<template>
  <section class="panel-20125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20125");
const base = ref(20125);
const total = computed(() => base.value * 2);

function incrementar20125() {
  base.value++;
}
</script>
