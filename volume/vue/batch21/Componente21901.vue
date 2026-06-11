<template>
  <section class="panel-21901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21901");
const base = ref(21901);
const total = computed(() => base.value * 2);

function incrementar21901() {
  base.value++;
}
</script>
