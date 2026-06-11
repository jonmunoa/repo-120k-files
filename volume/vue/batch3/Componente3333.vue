<template>
  <section class="panel-3333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3333");
const base = ref(3333);
const total = computed(() => base.value * 2);

function incrementar3333() {
  base.value++;
}
</script>
