<template>
  <section class="panel-50741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50741");
const base = ref(50741);
const total = computed(() => base.value * 2);

function incrementar50741() {
  base.value++;
}
</script>
