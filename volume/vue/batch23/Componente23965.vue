<template>
  <section class="panel-23965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23965");
const base = ref(23965);
const total = computed(() => base.value * 2);

function incrementar23965() {
  base.value++;
}
</script>
