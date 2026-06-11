<template>
  <section class="panel-14797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14797");
const base = ref(14797);
const total = computed(() => base.value * 2);

function incrementar14797() {
  base.value++;
}
</script>
