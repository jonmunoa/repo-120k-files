<template>
  <section class="panel-27549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27549");
const base = ref(27549);
const total = computed(() => base.value * 2);

function incrementar27549() {
  base.value++;
}
</script>
