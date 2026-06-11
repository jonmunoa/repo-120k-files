<template>
  <section class="panel-31617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31617");
const base = ref(31617);
const total = computed(() => base.value * 2);

function incrementar31617() {
  base.value++;
}
</script>
