<template>
  <section class="panel-55217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55217");
const base = ref(55217);
const total = computed(() => base.value * 2);

function incrementar55217() {
  base.value++;
}
</script>
