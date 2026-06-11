<template>
  <section class="panel-22165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22165");
const base = ref(22165);
const total = computed(() => base.value * 2);

function incrementar22165() {
  base.value++;
}
</script>
