<template>
  <section class="panel-30741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30741");
const base = ref(30741);
const total = computed(() => base.value * 2);

function incrementar30741() {
  base.value++;
}
</script>
