<template>
  <section class="panel-28909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28909");
const base = ref(28909);
const total = computed(() => base.value * 2);

function incrementar28909() {
  base.value++;
}
</script>
