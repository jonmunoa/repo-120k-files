<template>
  <section class="panel-23405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23405");
const base = ref(23405);
const total = computed(() => base.value * 2);

function incrementar23405() {
  base.value++;
}
</script>
