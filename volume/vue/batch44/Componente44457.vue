<template>
  <section class="panel-44457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44457");
const base = ref(44457);
const total = computed(() => base.value * 2);

function incrementar44457() {
  base.value++;
}
</script>
