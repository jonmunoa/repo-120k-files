<template>
  <section class="panel-51289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51289");
const base = ref(51289);
const total = computed(() => base.value * 2);

function incrementar51289() {
  base.value++;
}
</script>
