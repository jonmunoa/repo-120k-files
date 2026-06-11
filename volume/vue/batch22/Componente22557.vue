<template>
  <section class="panel-22557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22557");
const base = ref(22557);
const total = computed(() => base.value * 2);

function incrementar22557() {
  base.value++;
}
</script>
