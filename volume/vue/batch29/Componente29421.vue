<template>
  <section class="panel-29421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29421");
const base = ref(29421);
const total = computed(() => base.value * 2);

function incrementar29421() {
  base.value++;
}
</script>
