<template>
  <section class="panel-51901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51901");
const base = ref(51901);
const total = computed(() => base.value * 2);

function incrementar51901() {
  base.value++;
}
</script>
