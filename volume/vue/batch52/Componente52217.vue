<template>
  <section class="panel-52217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52217");
const base = ref(52217);
const total = computed(() => base.value * 2);

function incrementar52217() {
  base.value++;
}
</script>
