<template>
  <section class="panel-39249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39249");
const base = ref(39249);
const total = computed(() => base.value * 2);

function incrementar39249() {
  base.value++;
}
</script>
