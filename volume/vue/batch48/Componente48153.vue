<template>
  <section class="panel-48153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48153");
const base = ref(48153);
const total = computed(() => base.value * 2);

function incrementar48153() {
  base.value++;
}
</script>
