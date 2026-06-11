<template>
  <section class="panel-44513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44513");
const base = ref(44513);
const total = computed(() => base.value * 2);

function incrementar44513() {
  base.value++;
}
</script>
