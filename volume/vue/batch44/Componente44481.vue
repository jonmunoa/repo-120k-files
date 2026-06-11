<template>
  <section class="panel-44481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44481");
const base = ref(44481);
const total = computed(() => base.value * 2);

function incrementar44481() {
  base.value++;
}
</script>
