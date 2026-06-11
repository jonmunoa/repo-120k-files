<template>
  <section class="panel-49481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49481");
const base = ref(49481);
const total = computed(() => base.value * 2);

function incrementar49481() {
  base.value++;
}
</script>
