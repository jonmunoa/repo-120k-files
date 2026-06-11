<template>
  <section class="panel-4593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4593");
const base = ref(4593);
const total = computed(() => base.value * 2);

function incrementar4593() {
  base.value++;
}
</script>
