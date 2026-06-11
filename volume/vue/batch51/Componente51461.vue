<template>
  <section class="panel-51461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51461");
const base = ref(51461);
const total = computed(() => base.value * 2);

function incrementar51461() {
  base.value++;
}
</script>
