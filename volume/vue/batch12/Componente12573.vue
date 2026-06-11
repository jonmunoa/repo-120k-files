<template>
  <section class="panel-12573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12573");
const base = ref(12573);
const total = computed(() => base.value * 2);

function incrementar12573() {
  base.value++;
}
</script>
