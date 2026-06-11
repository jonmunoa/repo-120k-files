<template>
  <section class="panel-45553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45553");
const base = ref(45553);
const total = computed(() => base.value * 2);

function incrementar45553() {
  base.value++;
}
</script>
