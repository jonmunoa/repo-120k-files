<template>
  <section class="panel-21917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21917");
const base = ref(21917);
const total = computed(() => base.value * 2);

function incrementar21917() {
  base.value++;
}
</script>
