<template>
  <section class="panel-33153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33153");
const base = ref(33153);
const total = computed(() => base.value * 2);

function incrementar33153() {
  base.value++;
}
</script>
