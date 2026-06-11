<template>
  <section class="panel-16729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16729");
const base = ref(16729);
const total = computed(() => base.value * 2);

function incrementar16729() {
  base.value++;
}
</script>
