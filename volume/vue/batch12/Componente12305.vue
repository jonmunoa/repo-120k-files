<template>
  <section class="panel-12305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12305");
const base = ref(12305);
const total = computed(() => base.value * 2);

function incrementar12305() {
  base.value++;
}
</script>
