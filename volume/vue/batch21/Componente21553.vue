<template>
  <section class="panel-21553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21553");
const base = ref(21553);
const total = computed(() => base.value * 2);

function incrementar21553() {
  base.value++;
}
</script>
