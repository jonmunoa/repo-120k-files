<template>
  <section class="panel-43205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43205");
const base = ref(43205);
const total = computed(() => base.value * 2);

function incrementar43205() {
  base.value++;
}
</script>
