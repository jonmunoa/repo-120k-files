<template>
  <section class="panel-8553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8553");
const base = ref(8553);
const total = computed(() => base.value * 2);

function incrementar8553() {
  base.value++;
}
</script>
