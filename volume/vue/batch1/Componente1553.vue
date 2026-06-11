<template>
  <section class="panel-1553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1553");
const base = ref(1553);
const total = computed(() => base.value * 2);

function incrementar1553() {
  base.value++;
}
</script>
