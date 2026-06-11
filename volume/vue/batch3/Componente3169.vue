<template>
  <section class="panel-3169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3169");
const base = ref(3169);
const total = computed(() => base.value * 2);

function incrementar3169() {
  base.value++;
}
</script>
