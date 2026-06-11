<template>
  <section class="panel-5873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5873");
const base = ref(5873);
const total = computed(() => base.value * 2);

function incrementar5873() {
  base.value++;
}
</script>
