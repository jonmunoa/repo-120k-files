<template>
  <section class="panel-30901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30901");
const base = ref(30901);
const total = computed(() => base.value * 2);

function incrementar30901() {
  base.value++;
}
</script>
