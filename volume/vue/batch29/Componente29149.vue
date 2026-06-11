<template>
  <section class="panel-29149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29149");
const base = ref(29149);
const total = computed(() => base.value * 2);

function incrementar29149() {
  base.value++;
}
</script>
