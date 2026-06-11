<template>
  <section class="panel-28309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28309");
const base = ref(28309);
const total = computed(() => base.value * 2);

function incrementar28309() {
  base.value++;
}
</script>
