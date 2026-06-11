<template>
  <section class="panel-28057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28057");
const base = ref(28057);
const total = computed(() => base.value * 2);

function incrementar28057() {
  base.value++;
}
</script>
