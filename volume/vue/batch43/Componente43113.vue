<template>
  <section class="panel-43113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43113");
const base = ref(43113);
const total = computed(() => base.value * 2);

function incrementar43113() {
  base.value++;
}
</script>
