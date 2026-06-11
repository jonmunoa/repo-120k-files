<template>
  <section class="panel-41525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41525");
const base = ref(41525);
const total = computed(() => base.value * 2);

function incrementar41525() {
  base.value++;
}
</script>
