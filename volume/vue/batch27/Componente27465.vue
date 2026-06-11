<template>
  <section class="panel-27465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27465");
const base = ref(27465);
const total = computed(() => base.value * 2);

function incrementar27465() {
  base.value++;
}
</script>
