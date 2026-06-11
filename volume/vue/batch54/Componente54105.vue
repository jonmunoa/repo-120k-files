<template>
  <section class="panel-54105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54105");
const base = ref(54105);
const total = computed(() => base.value * 2);

function incrementar54105() {
  base.value++;
}
</script>
