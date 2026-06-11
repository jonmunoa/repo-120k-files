<template>
  <section class="panel-23901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23901");
const base = ref(23901);
const total = computed(() => base.value * 2);

function incrementar23901() {
  base.value++;
}
</script>
