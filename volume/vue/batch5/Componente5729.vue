<template>
  <section class="panel-5729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5729");
const base = ref(5729);
const total = computed(() => base.value * 2);

function incrementar5729() {
  base.value++;
}
</script>
