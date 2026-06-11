<template>
  <section class="panel-29141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29141");
const base = ref(29141);
const total = computed(() => base.value * 2);

function incrementar29141() {
  base.value++;
}
</script>
