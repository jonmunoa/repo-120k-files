<template>
  <section class="panel-40133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40133");
const base = ref(40133);
const total = computed(() => base.value * 2);

function incrementar40133() {
  base.value++;
}
</script>
