<template>
  <section class="panel-20573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20573");
const base = ref(20573);
const total = computed(() => base.value * 2);

function incrementar20573() {
  base.value++;
}
</script>
