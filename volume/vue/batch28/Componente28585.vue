<template>
  <section class="panel-28585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28585");
const base = ref(28585);
const total = computed(() => base.value * 2);

function incrementar28585() {
  base.value++;
}
</script>
