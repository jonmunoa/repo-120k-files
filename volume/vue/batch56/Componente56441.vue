<template>
  <section class="panel-56441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56441");
const base = ref(56441);
const total = computed(() => base.value * 2);

function incrementar56441() {
  base.value++;
}
</script>
