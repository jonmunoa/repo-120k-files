<template>
  <section class="panel-15313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15313");
const base = ref(15313);
const total = computed(() => base.value * 2);

function incrementar15313() {
  base.value++;
}
</script>
