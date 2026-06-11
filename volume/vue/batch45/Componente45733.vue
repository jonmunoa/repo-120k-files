<template>
  <section class="panel-45733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45733");
const base = ref(45733);
const total = computed(() => base.value * 2);

function incrementar45733() {
  base.value++;
}
</script>
