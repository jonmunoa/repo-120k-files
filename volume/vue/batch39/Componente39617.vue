<template>
  <section class="panel-39617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39617");
const base = ref(39617);
const total = computed(() => base.value * 2);

function incrementar39617() {
  base.value++;
}
</script>
