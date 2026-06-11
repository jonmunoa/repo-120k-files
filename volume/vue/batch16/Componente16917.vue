<template>
  <section class="panel-16917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16917");
const base = ref(16917);
const total = computed(() => base.value * 2);

function incrementar16917() {
  base.value++;
}
</script>
