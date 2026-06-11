<template>
  <section class="panel-22549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22549");
const base = ref(22549);
const total = computed(() => base.value * 2);

function incrementar22549() {
  base.value++;
}
</script>
