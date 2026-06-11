<template>
  <section class="panel-39553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39553");
const base = ref(39553);
const total = computed(() => base.value * 2);

function incrementar39553() {
  base.value++;
}
</script>
