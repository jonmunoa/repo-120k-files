<template>
  <section class="panel-17801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17801");
const base = ref(17801);
const total = computed(() => base.value * 2);

function incrementar17801() {
  base.value++;
}
</script>
