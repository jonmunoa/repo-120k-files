<template>
  <section class="panel-2481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2481");
const base = ref(2481);
const total = computed(() => base.value * 2);

function incrementar2481() {
  base.value++;
}
</script>
