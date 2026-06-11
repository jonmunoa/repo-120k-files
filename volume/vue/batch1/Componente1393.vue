<template>
  <section class="panel-1393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1393");
const base = ref(1393);
const total = computed(() => base.value * 2);

function incrementar1393() {
  base.value++;
}
</script>
