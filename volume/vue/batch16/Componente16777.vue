<template>
  <section class="panel-16777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16777");
const base = ref(16777);
const total = computed(() => base.value * 2);

function incrementar16777() {
  base.value++;
}
</script>
