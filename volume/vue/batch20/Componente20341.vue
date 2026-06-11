<template>
  <section class="panel-20341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20341");
const base = ref(20341);
const total = computed(() => base.value * 2);

function incrementar20341() {
  base.value++;
}
</script>
