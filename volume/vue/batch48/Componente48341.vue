<template>
  <section class="panel-48341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48341");
const base = ref(48341);
const total = computed(() => base.value * 2);

function incrementar48341() {
  base.value++;
}
</script>
