<template>
  <section class="panel-56553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56553");
const base = ref(56553);
const total = computed(() => base.value * 2);

function incrementar56553() {
  base.value++;
}
</script>
