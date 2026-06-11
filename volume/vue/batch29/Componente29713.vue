<template>
  <section class="panel-29713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29713");
const base = ref(29713);
const total = computed(() => base.value * 2);

function incrementar29713() {
  base.value++;
}
</script>
