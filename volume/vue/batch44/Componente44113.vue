<template>
  <section class="panel-44113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44113");
const base = ref(44113);
const total = computed(() => base.value * 2);

function incrementar44113() {
  base.value++;
}
</script>
