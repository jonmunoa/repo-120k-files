<template>
  <section class="panel-48857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48857");
const base = ref(48857);
const total = computed(() => base.value * 2);

function incrementar48857() {
  base.value++;
}
</script>
