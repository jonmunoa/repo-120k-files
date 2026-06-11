<template>
  <section class="panel-31153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31153");
const base = ref(31153);
const total = computed(() => base.value * 2);

function incrementar31153() {
  base.value++;
}
</script>
