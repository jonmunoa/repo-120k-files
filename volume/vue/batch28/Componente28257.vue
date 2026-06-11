<template>
  <section class="panel-28257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28257");
const base = ref(28257);
const total = computed(() => base.value * 2);

function incrementar28257() {
  base.value++;
}
</script>
