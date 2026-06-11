<template>
  <section class="panel-4361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4361");
const base = ref(4361);
const total = computed(() => base.value * 2);

function incrementar4361() {
  base.value++;
}
</script>
