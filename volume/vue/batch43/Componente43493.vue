<template>
  <section class="panel-43493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43493");
const base = ref(43493);
const total = computed(() => base.value * 2);

function incrementar43493() {
  base.value++;
}
</script>
