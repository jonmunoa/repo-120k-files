<template>
  <section class="panel-36513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36513");
const base = ref(36513);
const total = computed(() => base.value * 2);

function incrementar36513() {
  base.value++;
}
</script>
