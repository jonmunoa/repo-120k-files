<template>
  <section class="panel-18901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18901");
const base = ref(18901);
const total = computed(() => base.value * 2);

function incrementar18901() {
  base.value++;
}
</script>
