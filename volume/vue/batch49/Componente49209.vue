<template>
  <section class="panel-49209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49209");
const base = ref(49209);
const total = computed(() => base.value * 2);

function incrementar49209() {
  base.value++;
}
</script>
