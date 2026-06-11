<template>
  <section class="panel-39689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39689");
const base = ref(39689);
const total = computed(() => base.value * 2);

function incrementar39689() {
  base.value++;
}
</script>
