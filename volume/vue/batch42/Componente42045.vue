<template>
  <section class="panel-42045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42045");
const base = ref(42045);
const total = computed(() => base.value * 2);

function incrementar42045() {
  base.value++;
}
</script>
