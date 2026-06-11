<template>
  <section class="panel-23797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23797");
const base = ref(23797);
const total = computed(() => base.value * 2);

function incrementar23797() {
  base.value++;
}
</script>
