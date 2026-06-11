<template>
  <section class="panel-37901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37901");
const base = ref(37901);
const total = computed(() => base.value * 2);

function incrementar37901() {
  base.value++;
}
</script>
