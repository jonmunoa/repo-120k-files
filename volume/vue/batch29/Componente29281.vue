<template>
  <section class="panel-29281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29281");
const base = ref(29281);
const total = computed(() => base.value * 2);

function incrementar29281() {
  base.value++;
}
</script>
