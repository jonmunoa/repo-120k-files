<template>
  <section class="panel-22617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22617");
const base = ref(22617);
const total = computed(() => base.value * 2);

function incrementar22617() {
  base.value++;
}
</script>
