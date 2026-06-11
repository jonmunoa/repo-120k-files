<template>
  <section class="panel-27617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27617");
const base = ref(27617);
const total = computed(() => base.value * 2);

function incrementar27617() {
  base.value++;
}
</script>
