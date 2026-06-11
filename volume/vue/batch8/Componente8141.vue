<template>
  <section class="panel-8141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8141");
const base = ref(8141);
const total = computed(() => base.value * 2);

function incrementar8141() {
  base.value++;
}
</script>
