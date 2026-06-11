<template>
  <section class="panel-56153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56153");
const base = ref(56153);
const total = computed(() => base.value * 2);

function incrementar56153() {
  base.value++;
}
</script>
