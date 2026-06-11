<template>
  <section class="panel-10405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10405");
const base = ref(10405);
const total = computed(() => base.value * 2);

function incrementar10405() {
  base.value++;
}
</script>
