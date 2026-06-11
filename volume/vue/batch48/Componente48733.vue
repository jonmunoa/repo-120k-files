<template>
  <section class="panel-48733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48733");
const base = ref(48733);
const total = computed(() => base.value * 2);

function incrementar48733() {
  base.value++;
}
</script>
