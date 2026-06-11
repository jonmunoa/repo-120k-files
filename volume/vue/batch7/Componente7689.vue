<template>
  <section class="panel-7689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7689");
const base = ref(7689);
const total = computed(() => base.value * 2);

function incrementar7689() {
  base.value++;
}
</script>
