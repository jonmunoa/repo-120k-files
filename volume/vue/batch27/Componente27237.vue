<template>
  <section class="panel-27237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27237");
const base = ref(27237);
const total = computed(() => base.value * 2);

function incrementar27237() {
  base.value++;
}
</script>
