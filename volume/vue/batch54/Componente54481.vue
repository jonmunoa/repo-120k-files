<template>
  <section class="panel-54481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54481");
const base = ref(54481);
const total = computed(() => base.value * 2);

function incrementar54481() {
  base.value++;
}
</script>
