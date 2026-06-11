<template>
  <section class="panel-44689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44689");
const base = ref(44689);
const total = computed(() => base.value * 2);

function incrementar44689() {
  base.value++;
}
</script>
