<template>
  <section class="panel-10957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10957");
const base = ref(10957);
const total = computed(() => base.value * 2);

function incrementar10957() {
  base.value++;
}
</script>
