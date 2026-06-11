<template>
  <section class="panel-36177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36177");
const base = ref(36177);
const total = computed(() => base.value * 2);

function incrementar36177() {
  base.value++;
}
</script>
