<template>
  <section class="panel-22797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22797");
const base = ref(22797);
const total = computed(() => base.value * 2);

function incrementar22797() {
  base.value++;
}
</script>
