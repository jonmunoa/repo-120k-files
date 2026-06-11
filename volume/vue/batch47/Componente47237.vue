<template>
  <section class="panel-47237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47237");
const base = ref(47237);
const total = computed(() => base.value * 2);

function incrementar47237() {
  base.value++;
}
</script>
