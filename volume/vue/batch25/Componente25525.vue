<template>
  <section class="panel-25525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25525");
const base = ref(25525);
const total = computed(() => base.value * 2);

function incrementar25525() {
  base.value++;
}
</script>
