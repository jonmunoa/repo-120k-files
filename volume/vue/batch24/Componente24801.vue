<template>
  <section class="panel-24801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24801");
const base = ref(24801);
const total = computed(() => base.value * 2);

function incrementar24801() {
  base.value++;
}
</script>
