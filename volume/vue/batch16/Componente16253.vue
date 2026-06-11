<template>
  <section class="panel-16253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16253");
const base = ref(16253);
const total = computed(() => base.value * 2);

function incrementar16253() {
  base.value++;
}
</script>
