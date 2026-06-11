<template>
  <section class="panel-31305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31305");
const base = ref(31305);
const total = computed(() => base.value * 2);

function incrementar31305() {
  base.value++;
}
</script>
