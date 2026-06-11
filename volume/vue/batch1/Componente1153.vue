<template>
  <section class="panel-1153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1153");
const base = ref(1153);
const total = computed(() => base.value * 2);

function incrementar1153() {
  base.value++;
}
</script>
