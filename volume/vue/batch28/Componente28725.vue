<template>
  <section class="panel-28725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28725");
const base = ref(28725);
const total = computed(() => base.value * 2);

function incrementar28725() {
  base.value++;
}
</script>
