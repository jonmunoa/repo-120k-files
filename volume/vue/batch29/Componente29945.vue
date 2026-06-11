<template>
  <section class="panel-29945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29945");
const base = ref(29945);
const total = computed(() => base.value * 2);

function incrementar29945() {
  base.value++;
}
</script>
