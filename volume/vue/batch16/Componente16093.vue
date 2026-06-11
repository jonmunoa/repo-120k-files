<template>
  <section class="panel-16093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16093");
const base = ref(16093);
const total = computed(() => base.value * 2);

function incrementar16093() {
  base.value++;
}
</script>
