<template>
  <section class="panel-3497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3497");
const base = ref(3497);
const total = computed(() => base.value * 2);

function incrementar3497() {
  base.value++;
}
</script>
