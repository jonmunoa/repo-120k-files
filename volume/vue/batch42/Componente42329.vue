<template>
  <section class="panel-42329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42329");
const base = ref(42329);
const total = computed(() => base.value * 2);

function incrementar42329() {
  base.value++;
}
</script>
