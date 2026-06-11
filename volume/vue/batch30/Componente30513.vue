<template>
  <section class="panel-30513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30513");
const base = ref(30513);
const total = computed(() => base.value * 2);

function incrementar30513() {
  base.value++;
}
</script>
