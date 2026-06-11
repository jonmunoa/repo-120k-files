<template>
  <section class="panel-24305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24305");
const base = ref(24305);
const total = computed(() => base.value * 2);

function incrementar24305() {
  base.value++;
}
</script>
