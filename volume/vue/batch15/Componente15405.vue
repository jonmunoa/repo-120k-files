<template>
  <section class="panel-15405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15405");
const base = ref(15405);
const total = computed(() => base.value * 2);

function incrementar15405() {
  base.value++;
}
</script>
