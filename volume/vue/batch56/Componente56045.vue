<template>
  <section class="panel-56045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56045");
const base = ref(56045);
const total = computed(() => base.value * 2);

function incrementar56045() {
  base.value++;
}
</script>
