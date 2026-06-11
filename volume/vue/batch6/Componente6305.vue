<template>
  <section class="panel-6305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6305");
const base = ref(6305);
const total = computed(() => base.value * 2);

function incrementar6305() {
  base.value++;
}
</script>
