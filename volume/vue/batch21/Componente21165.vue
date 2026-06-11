<template>
  <section class="panel-21165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21165");
const base = ref(21165);
const total = computed(() => base.value * 2);

function incrementar21165() {
  base.value++;
}
</script>
