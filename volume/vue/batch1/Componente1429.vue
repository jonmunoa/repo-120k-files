<template>
  <section class="panel-1429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1429");
const base = ref(1429);
const total = computed(() => base.value * 2);

function incrementar1429() {
  base.value++;
}
</script>
