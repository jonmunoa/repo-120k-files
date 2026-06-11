<template>
  <section class="panel-33237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33237");
const base = ref(33237);
const total = computed(() => base.value * 2);

function incrementar33237() {
  base.value++;
}
</script>
