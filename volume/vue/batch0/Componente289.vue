<template>
  <section class="panel-289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 289");
const base = ref(289);
const total = computed(() => base.value * 2);

function incrementar289() {
  base.value++;
}
</script>
