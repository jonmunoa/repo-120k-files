<template>
  <section class="panel-25557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25557");
const base = ref(25557);
const total = computed(() => base.value * 2);

function incrementar25557() {
  base.value++;
}
</script>
