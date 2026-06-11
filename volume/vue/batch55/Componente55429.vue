<template>
  <section class="panel-55429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55429");
const base = ref(55429);
const total = computed(() => base.value * 2);

function incrementar55429() {
  base.value++;
}
</script>
