<template>
  <section class="panel-23481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23481");
const base = ref(23481);
const total = computed(() => base.value * 2);

function incrementar23481() {
  base.value++;
}
</script>
