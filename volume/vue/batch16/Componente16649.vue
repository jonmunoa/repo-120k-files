<template>
  <section class="panel-16649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16649");
const base = ref(16649);
const total = computed(() => base.value * 2);

function incrementar16649() {
  base.value++;
}
</script>
