<template>
  <section class="panel-41565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41565");
const base = ref(41565);
const total = computed(() => base.value * 2);

function incrementar41565() {
  base.value++;
}
</script>
