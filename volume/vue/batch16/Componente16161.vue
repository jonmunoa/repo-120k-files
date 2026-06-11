<template>
  <section class="panel-16161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16161");
const base = ref(16161);
const total = computed(() => base.value * 2);

function incrementar16161() {
  base.value++;
}
</script>
