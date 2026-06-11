<template>
  <section class="panel-27573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27573");
const base = ref(27573);
const total = computed(() => base.value * 2);

function incrementar27573() {
  base.value++;
}
</script>
