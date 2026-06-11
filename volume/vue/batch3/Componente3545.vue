<template>
  <section class="panel-3545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3545");
const base = ref(3545);
const total = computed(() => base.value * 2);

function incrementar3545() {
  base.value++;
}
</script>
