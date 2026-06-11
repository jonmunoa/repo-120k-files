<template>
  <section class="panel-56749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56749");
const base = ref(56749);
const total = computed(() => base.value * 2);

function incrementar56749() {
  base.value++;
}
</script>
