<template>
  <section class="panel-2525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2525");
const base = ref(2525);
const total = computed(() => base.value * 2);

function incrementar2525() {
  base.value++;
}
</script>
