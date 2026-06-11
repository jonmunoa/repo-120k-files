<template>
  <section class="panel-42217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42217");
const base = ref(42217);
const total = computed(() => base.value * 2);

function incrementar42217() {
  base.value++;
}
</script>
