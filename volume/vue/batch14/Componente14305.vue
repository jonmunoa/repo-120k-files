<template>
  <section class="panel-14305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14305");
const base = ref(14305);
const total = computed(() => base.value * 2);

function incrementar14305() {
  base.value++;
}
</script>
