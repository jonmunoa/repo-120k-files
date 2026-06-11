<template>
  <section class="panel-31917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31917");
const base = ref(31917);
const total = computed(() => base.value * 2);

function incrementar31917() {
  base.value++;
}
</script>
