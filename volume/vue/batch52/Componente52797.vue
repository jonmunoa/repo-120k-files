<template>
  <section class="panel-52797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52797");
const base = ref(52797);
const total = computed(() => base.value * 2);

function incrementar52797() {
  base.value++;
}
</script>
