<template>
  <section class="panel-37313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37313");
const base = ref(37313);
const total = computed(() => base.value * 2);

function incrementar37313() {
  base.value++;
}
</script>
