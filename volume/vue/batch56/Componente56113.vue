<template>
  <section class="panel-56113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56113");
const base = ref(56113);
const total = computed(() => base.value * 2);

function incrementar56113() {
  base.value++;
}
</script>
