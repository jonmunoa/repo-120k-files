<template>
  <section class="panel-54393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54393");
const base = ref(54393);
const total = computed(() => base.value * 2);

function incrementar54393() {
  base.value++;
}
</script>
