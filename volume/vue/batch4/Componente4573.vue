<template>
  <section class="panel-4573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4573");
const base = ref(4573);
const total = computed(() => base.value * 2);

function incrementar4573() {
  base.value++;
}
</script>
