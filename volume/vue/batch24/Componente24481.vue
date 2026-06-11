<template>
  <section class="panel-24481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24481");
const base = ref(24481);
const total = computed(() => base.value * 2);

function incrementar24481() {
  base.value++;
}
</script>
