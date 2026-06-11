<template>
  <section class="panel-45333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45333");
const base = ref(45333);
const total = computed(() => base.value * 2);

function incrementar45333() {
  base.value++;
}
</script>
