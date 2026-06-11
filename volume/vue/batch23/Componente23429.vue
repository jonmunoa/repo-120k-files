<template>
  <section class="panel-23429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23429");
const base = ref(23429);
const total = computed(() => base.value * 2);

function incrementar23429() {
  base.value++;
}
</script>
