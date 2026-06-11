<template>
  <section class="panel-12801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12801");
const base = ref(12801);
const total = computed(() => base.value * 2);

function incrementar12801() {
  base.value++;
}
</script>
