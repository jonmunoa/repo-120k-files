<template>
  <section class="panel-18665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18665");
const base = ref(18665);
const total = computed(() => base.value * 2);

function incrementar18665() {
  base.value++;
}
</script>
