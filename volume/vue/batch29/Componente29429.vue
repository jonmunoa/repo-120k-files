<template>
  <section class="panel-29429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29429");
const base = ref(29429);
const total = computed(() => base.value * 2);

function incrementar29429() {
  base.value++;
}
</script>
