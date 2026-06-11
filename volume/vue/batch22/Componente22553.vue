<template>
  <section class="panel-22553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22553");
const base = ref(22553);
const total = computed(() => base.value * 2);

function incrementar22553() {
  base.value++;
}
</script>
