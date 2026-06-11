<template>
  <section class="panel-36125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36125");
const base = ref(36125);
const total = computed(() => base.value * 2);

function incrementar36125() {
  base.value++;
}
</script>
