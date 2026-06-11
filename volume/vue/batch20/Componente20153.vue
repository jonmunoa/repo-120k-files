<template>
  <section class="panel-20153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20153");
const base = ref(20153);
const total = computed(() => base.value * 2);

function incrementar20153() {
  base.value++;
}
</script>
