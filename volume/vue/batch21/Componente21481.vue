<template>
  <section class="panel-21481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21481");
const base = ref(21481);
const total = computed(() => base.value * 2);

function incrementar21481() {
  base.value++;
}
</script>
