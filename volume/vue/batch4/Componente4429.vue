<template>
  <section class="panel-4429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4429");
const base = ref(4429);
const total = computed(() => base.value * 2);

function incrementar4429() {
  base.value++;
}
</script>
