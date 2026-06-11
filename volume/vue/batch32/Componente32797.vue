<template>
  <section class="panel-32797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32797");
const base = ref(32797);
const total = computed(() => base.value * 2);

function incrementar32797() {
  base.value++;
}
</script>
