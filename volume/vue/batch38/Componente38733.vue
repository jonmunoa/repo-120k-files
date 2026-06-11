<template>
  <section class="panel-38733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38733");
const base = ref(38733);
const total = computed(() => base.value * 2);

function incrementar38733() {
  base.value++;
}
</script>
