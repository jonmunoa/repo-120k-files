<template>
  <section class="panel-38129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38129");
const base = ref(38129);
const total = computed(() => base.value * 2);

function incrementar38129() {
  base.value++;
}
</script>
