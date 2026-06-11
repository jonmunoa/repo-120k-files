<template>
  <section class="panel-32481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32481");
const base = ref(32481);
const total = computed(() => base.value * 2);

function incrementar32481() {
  base.value++;
}
</script>
