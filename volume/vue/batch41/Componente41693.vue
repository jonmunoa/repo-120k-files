<template>
  <section class="panel-41693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41693");
const base = ref(41693);
const total = computed(() => base.value * 2);

function incrementar41693() {
  base.value++;
}
</script>
