<template>
  <section class="panel-45429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45429");
const base = ref(45429);
const total = computed(() => base.value * 2);

function incrementar45429() {
  base.value++;
}
</script>
