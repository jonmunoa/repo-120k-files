<template>
  <section class="panel-52553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52553");
const base = ref(52553);
const total = computed(() => base.value * 2);

function incrementar52553() {
  base.value++;
}
</script>
