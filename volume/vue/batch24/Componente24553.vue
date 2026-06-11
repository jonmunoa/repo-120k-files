<template>
  <section class="panel-24553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24553");
const base = ref(24553);
const total = computed(() => base.value * 2);

function incrementar24553() {
  base.value++;
}
</script>
