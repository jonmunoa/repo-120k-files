<template>
  <section class="panel-2553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2553");
const base = ref(2553);
const total = computed(() => base.value * 2);

function incrementar2553() {
  base.value++;
}
</script>
