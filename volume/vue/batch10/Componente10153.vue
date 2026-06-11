<template>
  <section class="panel-10153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10153");
const base = ref(10153);
const total = computed(() => base.value * 2);

function incrementar10153() {
  base.value++;
}
</script>
