<template>
  <section class="panel-3741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3741");
const base = ref(3741);
const total = computed(() => base.value * 2);

function incrementar3741() {
  base.value++;
}
</script>
