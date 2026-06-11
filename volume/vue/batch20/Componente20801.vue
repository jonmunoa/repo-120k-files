<template>
  <section class="panel-20801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20801");
const base = ref(20801);
const total = computed(() => base.value * 2);

function incrementar20801() {
  base.value++;
}
</script>
