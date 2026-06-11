<template>
  <section class="panel-39465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39465");
const base = ref(39465);
const total = computed(() => base.value * 2);

function incrementar39465() {
  base.value++;
}
</script>
