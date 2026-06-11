<template>
  <section class="panel-6541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6541");
const base = ref(6541);
const total = computed(() => base.value * 2);

function incrementar6541() {
  base.value++;
}
</script>
