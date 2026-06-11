<template>
  <section class="panel-54281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54281");
const base = ref(54281);
const total = computed(() => base.value * 2);

function incrementar54281() {
  base.value++;
}
</script>
