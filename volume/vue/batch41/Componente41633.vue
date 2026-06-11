<template>
  <section class="panel-41633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41633");
const base = ref(41633);
const total = computed(() => base.value * 2);

function incrementar41633() {
  base.value++;
}
</script>
