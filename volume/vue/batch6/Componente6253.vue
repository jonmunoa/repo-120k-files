<template>
  <section class="panel-6253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6253");
const base = ref(6253);
const total = computed(() => base.value * 2);

function incrementar6253() {
  base.value++;
}
</script>
