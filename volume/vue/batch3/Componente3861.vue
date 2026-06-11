<template>
  <section class="panel-3861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3861");
const base = ref(3861);
const total = computed(() => base.value * 2);

function incrementar3861() {
  base.value++;
}
</script>
