<template>
  <section class="panel-2221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2221");
const base = ref(2221);
const total = computed(() => base.value * 2);

function incrementar2221() {
  base.value++;
}
</script>
