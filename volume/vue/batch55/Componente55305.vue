<template>
  <section class="panel-55305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55305");
const base = ref(55305);
const total = computed(() => base.value * 2);

function incrementar55305() {
  base.value++;
}
</script>
