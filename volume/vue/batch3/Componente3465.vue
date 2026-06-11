<template>
  <section class="panel-3465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3465");
const base = ref(3465);
const total = computed(() => base.value * 2);

function incrementar3465() {
  base.value++;
}
</script>
