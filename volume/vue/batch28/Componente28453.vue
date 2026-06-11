<template>
  <section class="panel-28453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28453");
const base = ref(28453);
const total = computed(() => base.value * 2);

function incrementar28453() {
  base.value++;
}
</script>
