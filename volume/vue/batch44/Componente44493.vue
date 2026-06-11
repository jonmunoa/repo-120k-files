<template>
  <section class="panel-44493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44493");
const base = ref(44493);
const total = computed(() => base.value * 2);

function incrementar44493() {
  base.value++;
}
</script>
