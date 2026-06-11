<template>
  <section class="panel-23801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23801");
const base = ref(23801);
const total = computed(() => base.value * 2);

function incrementar23801() {
  base.value++;
}
</script>
