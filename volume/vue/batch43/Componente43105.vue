<template>
  <section class="panel-43105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43105");
const base = ref(43105);
const total = computed(() => base.value * 2);

function incrementar43105() {
  base.value++;
}
</script>
