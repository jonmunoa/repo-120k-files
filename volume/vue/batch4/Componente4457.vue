<template>
  <section class="panel-4457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4457");
const base = ref(4457);
const total = computed(() => base.value * 2);

function incrementar4457() {
  base.value++;
}
</script>
