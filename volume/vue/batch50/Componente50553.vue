<template>
  <section class="panel-50553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50553");
const base = ref(50553);
const total = computed(() => base.value * 2);

function incrementar50553() {
  base.value++;
}
</script>
