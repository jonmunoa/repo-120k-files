<template>
  <section class="panel-42305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42305");
const base = ref(42305);
const total = computed(() => base.value * 2);

function incrementar42305() {
  base.value++;
}
</script>
