<template>
  <section class="panel-28201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28201");
const base = ref(28201);
const total = computed(() => base.value * 2);

function incrementar28201() {
  base.value++;
}
</script>
