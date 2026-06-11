<template>
  <section class="panel-50153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50153");
const base = ref(50153);
const total = computed(() => base.value * 2);

function incrementar50153() {
  base.value++;
}
</script>
