<template>
  <section class="panel-10285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10285");
const base = ref(10285);
const total = computed(() => base.value * 2);

function incrementar10285() {
  base.value++;
}
</script>
