<template>
  <section class="panel-11305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11305");
const base = ref(11305);
const total = computed(() => base.value * 2);

function incrementar11305() {
  base.value++;
}
</script>
