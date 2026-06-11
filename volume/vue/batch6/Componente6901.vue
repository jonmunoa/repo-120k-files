<template>
  <section class="panel-6901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6901");
const base = ref(6901);
const total = computed(() => base.value * 2);

function incrementar6901() {
  base.value++;
}
</script>
