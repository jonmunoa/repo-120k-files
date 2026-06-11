<template>
  <section class="panel-41857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41857");
const base = ref(41857);
const total = computed(() => base.value * 2);

function incrementar41857() {
  base.value++;
}
</script>
