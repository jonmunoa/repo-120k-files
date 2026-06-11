<template>
  <section class="panel-47453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47453");
const base = ref(47453);
const total = computed(() => base.value * 2);

function incrementar47453() {
  base.value++;
}
</script>
