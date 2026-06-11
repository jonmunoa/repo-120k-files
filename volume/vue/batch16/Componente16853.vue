<template>
  <section class="panel-16853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16853");
const base = ref(16853);
const total = computed(() => base.value * 2);

function incrementar16853() {
  base.value++;
}
</script>
