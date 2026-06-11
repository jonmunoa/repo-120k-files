<template>
  <section class="panel-21465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21465");
const base = ref(21465);
const total = computed(() => base.value * 2);

function incrementar21465() {
  base.value++;
}
</script>
