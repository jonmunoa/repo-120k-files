<template>
  <section class="panel-38013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38013");
const base = ref(38013);
const total = computed(() => base.value * 2);

function incrementar38013() {
  base.value++;
}
</script>
