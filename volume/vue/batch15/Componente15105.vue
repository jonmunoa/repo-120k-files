<template>
  <section class="panel-15105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15105");
const base = ref(15105);
const total = computed(() => base.value * 2);

function incrementar15105() {
  base.value++;
}
</script>
