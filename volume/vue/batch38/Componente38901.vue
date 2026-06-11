<template>
  <section class="panel-38901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38901");
const base = ref(38901);
const total = computed(() => base.value * 2);

function incrementar38901() {
  base.value++;
}
</script>
