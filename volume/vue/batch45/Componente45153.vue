<template>
  <section class="panel-45153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45153");
const base = ref(45153);
const total = computed(() => base.value * 2);

function incrementar45153() {
  base.value++;
}
</script>
