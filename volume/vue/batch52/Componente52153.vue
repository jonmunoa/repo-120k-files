<template>
  <section class="panel-52153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52153");
const base = ref(52153);
const total = computed(() => base.value * 2);

function incrementar52153() {
  base.value++;
}
</script>
