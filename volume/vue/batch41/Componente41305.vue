<template>
  <section class="panel-41305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41305");
const base = ref(41305);
const total = computed(() => base.value * 2);

function incrementar41305() {
  base.value++;
}
</script>
