<template>
  <section class="panel-6429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6429");
const base = ref(6429);
const total = computed(() => base.value * 2);

function incrementar6429() {
  base.value++;
}
</script>
