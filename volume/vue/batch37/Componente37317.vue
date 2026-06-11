<template>
  <section class="panel-37317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37317");
const base = ref(37317);
const total = computed(() => base.value * 2);

function incrementar37317() {
  base.value++;
}
</script>
