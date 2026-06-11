<template>
  <section class="panel-36113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36113");
const base = ref(36113);
const total = computed(() => base.value * 2);

function incrementar36113() {
  base.value++;
}
</script>
