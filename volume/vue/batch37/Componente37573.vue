<template>
  <section class="panel-37573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37573");
const base = ref(37573);
const total = computed(() => base.value * 2);

function incrementar37573() {
  base.value++;
}
</script>
