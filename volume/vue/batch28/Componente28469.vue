<template>
  <section class="panel-28469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28469");
const base = ref(28469);
const total = computed(() => base.value * 2);

function incrementar28469() {
  base.value++;
}
</script>
