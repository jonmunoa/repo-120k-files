<template>
  <section class="panel-1545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1545");
const base = ref(1545);
const total = computed(() => base.value * 2);

function incrementar1545() {
  base.value++;
}
</script>
