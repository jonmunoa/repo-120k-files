<template>
  <section class="panel-16541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16541");
const base = ref(16541);
const total = computed(() => base.value * 2);

function incrementar16541() {
  base.value++;
}
</script>
