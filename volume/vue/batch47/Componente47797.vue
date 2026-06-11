<template>
  <section class="panel-47797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47797");
const base = ref(47797);
const total = computed(() => base.value * 2);

function incrementar47797() {
  base.value++;
}
</script>
