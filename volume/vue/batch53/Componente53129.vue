<template>
  <section class="panel-53129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53129");
const base = ref(53129);
const total = computed(() => base.value * 2);

function incrementar53129() {
  base.value++;
}
</script>
