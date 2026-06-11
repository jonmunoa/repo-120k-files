<template>
  <section class="panel-15797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15797");
const base = ref(15797);
const total = computed(() => base.value * 2);

function incrementar15797() {
  base.value++;
}
</script>
