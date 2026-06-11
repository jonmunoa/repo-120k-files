<template>
  <section class="panel-30617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30617");
const base = ref(30617);
const total = computed(() => base.value * 2);

function incrementar30617() {
  base.value++;
}
</script>
