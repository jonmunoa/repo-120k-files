<template>
  <section class="panel-19801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19801");
const base = ref(19801);
const total = computed(() => base.value * 2);

function incrementar19801() {
  base.value++;
}
</script>
