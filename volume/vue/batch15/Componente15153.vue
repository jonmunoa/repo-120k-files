<template>
  <section class="panel-15153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15153");
const base = ref(15153);
const total = computed(() => base.value * 2);

function incrementar15153() {
  base.value++;
}
</script>
