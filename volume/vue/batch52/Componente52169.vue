<template>
  <section class="panel-52169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52169");
const base = ref(52169);
const total = computed(() => base.value * 2);

function incrementar52169() {
  base.value++;
}
</script>
