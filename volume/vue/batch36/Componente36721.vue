<template>
  <section class="panel-36721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36721");
const base = ref(36721);
const total = computed(() => base.value * 2);

function incrementar36721() {
  base.value++;
}
</script>
