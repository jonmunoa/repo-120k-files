<template>
  <section class="panel-31797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31797");
const base = ref(31797);
const total = computed(() => base.value * 2);

function incrementar31797() {
  base.value++;
}
</script>
