<template>
  <section class="panel-23221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23221");
const base = ref(23221);
const total = computed(() => base.value * 2);

function incrementar23221() {
  base.value++;
}
</script>
