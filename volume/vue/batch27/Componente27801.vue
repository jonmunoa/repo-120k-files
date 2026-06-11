<template>
  <section class="panel-27801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27801");
const base = ref(27801);
const total = computed(() => base.value * 2);

function incrementar27801() {
  base.value++;
}
</script>
