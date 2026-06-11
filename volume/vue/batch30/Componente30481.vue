<template>
  <section class="panel-30481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30481");
const base = ref(30481);
const total = computed(() => base.value * 2);

function incrementar30481() {
  base.value++;
}
</script>
