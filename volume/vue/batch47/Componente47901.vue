<template>
  <section class="panel-47901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47901");
const base = ref(47901);
const total = computed(() => base.value * 2);

function incrementar47901() {
  base.value++;
}
</script>
