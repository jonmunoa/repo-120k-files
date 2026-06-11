<template>
  <section class="panel-39217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39217");
const base = ref(39217);
const total = computed(() => base.value * 2);

function incrementar39217() {
  base.value++;
}
</script>
