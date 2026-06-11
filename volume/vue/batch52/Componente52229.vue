<template>
  <section class="panel-52229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52229");
const base = ref(52229);
const total = computed(() => base.value * 2);

function incrementar52229() {
  base.value++;
}
</script>
