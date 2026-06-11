<template>
  <section class="panel-27689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27689");
const base = ref(27689);
const total = computed(() => base.value * 2);

function incrementar27689() {
  base.value++;
}
</script>
