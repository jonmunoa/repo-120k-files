<template>
  <section class="panel-16217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16217");
const base = ref(16217);
const total = computed(() => base.value * 2);

function incrementar16217() {
  base.value++;
}
</script>
