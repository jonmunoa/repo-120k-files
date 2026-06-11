<template>
  <section class="panel-3553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3553");
const base = ref(3553);
const total = computed(() => base.value * 2);

function incrementar3553() {
  base.value++;
}
</script>
