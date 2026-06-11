<template>
  <section class="panel-405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 405");
const base = ref(405);
const total = computed(() => base.value * 2);

function incrementar405() {
  base.value++;
}
</script>
