<template>
  <section class="panel-4237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4237");
const base = ref(4237);
const total = computed(() => base.value * 2);

function incrementar4237() {
  base.value++;
}
</script>
