<template>
  <section class="panel-33305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33305");
const base = ref(33305);
const total = computed(() => base.value * 2);

function incrementar33305() {
  base.value++;
}
</script>
