<template>
  <section class="panel-6649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6649");
const base = ref(6649);
const total = computed(() => base.value * 2);

function incrementar6649() {
  base.value++;
}
</script>
