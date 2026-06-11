<template>
  <section class="panel-52697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52697");
const base = ref(52697);
const total = computed(() => base.value * 2);

function incrementar52697() {
  base.value++;
}
</script>
