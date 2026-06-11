<template>
  <section class="panel-14153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14153");
const base = ref(14153);
const total = computed(() => base.value * 2);

function incrementar14153() {
  base.value++;
}
</script>
