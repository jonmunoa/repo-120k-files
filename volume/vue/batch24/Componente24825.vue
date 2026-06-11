<template>
  <section class="panel-24825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24825");
const base = ref(24825);
const total = computed(() => base.value * 2);

function incrementar24825() {
  base.value++;
}
</script>
