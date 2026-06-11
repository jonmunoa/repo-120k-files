<template>
  <section class="panel-42337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42337");
const base = ref(42337);
const total = computed(() => base.value * 2);

function incrementar42337() {
  base.value++;
}
</script>
