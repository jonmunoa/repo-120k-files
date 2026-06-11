<template>
  <section class="panel-28901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28901");
const base = ref(28901);
const total = computed(() => base.value * 2);

function incrementar28901() {
  base.value++;
}
</script>
