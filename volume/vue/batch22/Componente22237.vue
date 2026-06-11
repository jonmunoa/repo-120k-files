<template>
  <section class="panel-22237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22237");
const base = ref(22237);
const total = computed(() => base.value * 2);

function incrementar22237() {
  base.value++;
}
</script>
