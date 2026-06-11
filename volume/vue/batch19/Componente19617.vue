<template>
  <section class="panel-19617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19617");
const base = ref(19617);
const total = computed(() => base.value * 2);

function incrementar19617() {
  base.value++;
}
</script>
