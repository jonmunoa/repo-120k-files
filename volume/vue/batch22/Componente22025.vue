<template>
  <section class="panel-22025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22025");
const base = ref(22025);
const total = computed(() => base.value * 2);

function incrementar22025() {
  base.value++;
}
</script>
