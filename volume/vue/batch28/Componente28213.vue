<template>
  <section class="panel-28213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28213");
const base = ref(28213);
const total = computed(() => base.value * 2);

function incrementar28213() {
  base.value++;
}
</script>
