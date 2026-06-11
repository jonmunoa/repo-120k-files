<template>
  <section class="panel-54689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54689");
const base = ref(54689);
const total = computed(() => base.value * 2);

function incrementar54689() {
  base.value++;
}
</script>
