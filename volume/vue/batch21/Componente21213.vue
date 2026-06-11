<template>
  <section class="panel-21213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21213");
const base = ref(21213);
const total = computed(() => base.value * 2);

function incrementar21213() {
  base.value++;
}
</script>
