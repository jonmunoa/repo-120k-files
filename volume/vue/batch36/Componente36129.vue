<template>
  <section class="panel-36129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36129");
const base = ref(36129);
const total = computed(() => base.value * 2);

function incrementar36129() {
  base.value++;
}
</script>
