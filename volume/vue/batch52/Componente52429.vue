<template>
  <section class="panel-52429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52429");
const base = ref(52429);
const total = computed(() => base.value * 2);

function incrementar52429() {
  base.value++;
}
</script>
