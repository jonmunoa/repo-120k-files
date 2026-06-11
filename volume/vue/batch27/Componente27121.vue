<template>
  <section class="panel-27121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27121");
const base = ref(27121);
const total = computed(() => base.value * 2);

function incrementar27121() {
  base.value++;
}
</script>
