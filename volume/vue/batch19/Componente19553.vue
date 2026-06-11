<template>
  <section class="panel-19553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19553");
const base = ref(19553);
const total = computed(() => base.value * 2);

function incrementar19553() {
  base.value++;
}
</script>
