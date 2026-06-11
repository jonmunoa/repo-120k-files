<template>
  <section class="panel-4729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4729");
const base = ref(4729);
const total = computed(() => base.value * 2);

function incrementar4729() {
  base.value++;
}
</script>
