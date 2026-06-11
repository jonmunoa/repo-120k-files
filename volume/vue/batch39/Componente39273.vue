<template>
  <section class="panel-39273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39273");
const base = ref(39273);
const total = computed(() => base.value * 2);

function incrementar39273() {
  base.value++;
}
</script>
